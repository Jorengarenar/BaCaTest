#include "source.cpp"

typedef void (*func)();

void test00() {
    #include "in/00.cpp"
}

void test01() {
    #include "in/01.cpp"
}

void test02() {
    #include "in/02.cpp"
}

void test03() {
    #include "in/03.cpp"
}

void test04() {
    #include "in/04.cpp"
}

void test05() {
    #include "in/05.cpp"
}

void test06() {
    #include "in/06.cpp"
}

void test07() {
    #include "in/07.cpp"
}

void test08() {
    #include "in/08.cpp"
}

void test09() {
    #include "in/09.cpp"
}

void test10() {
    #include "in/10.cpp"
}

const func tests[] = {
    test00,
    test01,
    test02,
    test03,
    test04,
    test05,
    test06,
    test07,
    test08,
    test09,
    test10,
};

const int TESTS = 11;
