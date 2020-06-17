#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "tests.cpp"

bool compareFiles(const std::string& p1, const std::string& p2)
{
    std::ifstream in1(p1.c_str(), std::ifstream::ate | std::ios::binary);
    std::ifstream in2(p2.c_str(), std::ifstream::ate | std::ios::binary);

    std::ifstream::pos_type size1 = in1.tellg();
    in1.seekg(0, std::ifstream::beg);

    std::ifstream::pos_type size2 = in2.tellg();
    in2.seekg(0, std::ifstream::beg);

    if (size1 != size2) {
        return false;
    }

    static const size_t BLOCKSIZE = 4096;
    size_t remaining = size1;

    while (remaining) {
        char buffer1[BLOCKSIZE], buffer2[BLOCKSIZE];
        size_t size = std::min(BLOCKSIZE, remaining);

        in1.read(buffer1, size);
        in2.read(buffer2, size);

        if (0 != memcmp(buffer1, buffer2, size)) {
            return false;
        }

        remaining -= size;
    }

    return true;
}

typedef unsigned short uShort;

std::string toString(uShort n)
{
    std::ostringstream ss;
    if (n < 10) {
        ss << 0;
    }
    ss << n;
    return ss.str();
}

void test(uShort n)
{
    static std::streambuf* const coutbuf = std::cout.rdbuf();
    std::string N = toString(n);
    std::ofstream buf("buf.txt");
    std::cout << "Test " << N << ": ";
    std::cout.rdbuf(buf.rdbuf());
    tests[n]();
    std::cout.rdbuf(coutbuf);
    buf.close();
    if (compareFiles("buf.txt", "out/" + N + ".txt")) {
        std::cout << "GOOD" << std::endl;
    }
    else {
        std::cout << "BAD" << std::endl;
        std::ifstream src("buf.txt", std::ios::binary);
        std::ofstream dst(("bad/" + N + ".txt").c_str(), std::ios::binary);
        dst << src.rdbuf();
        src.close();
        dst.close();
    }
}

int main()
{
    for (int i = 0; i < ::TESTS; ++i) {
        test(i);
    }
    return 0;
}

// vim: fen
