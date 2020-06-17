#include <iostream>
#include <cstdarg>

using namespace std;

#include "../POLYNOMIAL.cpp"

int POLYNOMIAL::overloaded = 0;

#include <cstdlib>

int main(int argc, char* argv[])
{
    if (argc > 1) {
        switch (atoi(argv[1])) {
            case 1: {
                #include "tests/1.cpp"
            } break;
            case 2: {
                #include "tests/2.cpp"
            } break;
            case 3: {
               // #include "tests/3.cpp"
            } break;
            default:
                break;
        }
    }
    return 0;
}
