#define BOOST_TEST_MODULE Div
#include "init_testing.hpp"

BOOST_AUTO_TEST_CASE(test0)
{
    output << (POLYNOMIAL() / POLYNOMIAL(0, 1));
    CHECK_OUTPUT("( 0 )");
}

BOOST_AUTO_TEST_CASE(test1)
{
    output << (POLYNOMIAL(2, 1, -2, 1) / POLYNOMIAL(2, 1, -2, 1));
    CHECK_OUTPUT("( 1 )");
}

BOOST_AUTO_TEST_CASE(test2)
{
    output << (POLYNOMIAL(0, 1) / POLYNOMIAL(0, 1));
    CHECK_OUTPUT("( 1 )");
}

BOOST_AUTO_TEST_CASE(test3)
{
    output << (POLYNOMIAL(4, 2, 3, 5, 7, 11) / POLYNOMIAL(0, 1));
    CHECK_OUTPUT("( 2, 3, 5, 7, 11 )");
}

BOOST_AUTO_TEST_CASE(test4)
{
    output << (POLYNOMIAL(4, 2, 3, 5, 7, 11) / POLYNOMIAL(1, 1, 1));
    CHECK_OUTPUT("( -6, 9, -4, 11 )");
}

BOOST_AUTO_TEST_CASE(test5)
{
    output << (POLYNOMIAL(4, 2, 3, 5, 7, 11) / POLYNOMIAL(1, -1, -1));
    CHECK_OUTPUT("( 6, -9, 4, -11 )");
}

BOOST_AUTO_TEST_CASE(test6)
{
    output << (POLYNOMIAL(4, 2, 3, 5, 7, 11) / POLYNOMIAL(1, 0, 1));
    CHECK_OUTPUT("( 3, 5, 7, 11 )");
}

BOOST_AUTO_TEST_CASE(test7)
{
    output << (POLYNOMIAL(2, 1, 1, -2) / POLYNOMIAL(1, -1, 1));
    CHECK_OUTPUT("( -1, -2 )");
}

BOOST_AUTO_TEST_CASE(test8)
{
    output << (POLYNOMIAL(2, 1, 1, -2) / POLYNOMIAL(0, -1));
    CHECK_OUTPUT("( -1, -1, 2 )");
}

BOOST_AUTO_TEST_CASE(test9)
{
    output << (POLYNOMIAL(2, 1, 1, 2) / POLYNOMIAL(1, -1, 1));
    CHECK_OUTPUT("( 3, 2 )");
}

BOOST_AUTO_TEST_CASE(test10)
{
    output << (POLYNOMIAL(2, 1, 4, 2) / POLYNOMIAL(1, 1, 1));
    CHECK_OUTPUT("( 1, 1 )");
}

BOOST_AUTO_TEST_CASE(test11)
{
    output << (POLYNOMIAL(2, 2, 3, 5) / POLYNOMIAL(1, 1, 7));
    CHECK_OUTPUT("( 16, 35 )");
}

BOOST_AUTO_TEST_CASE(test12)
{
    output << (POLYNOMIAL() / POLYNOMIAL(2, 4, -4, 1));
    CHECK_OUTPUT("( 0 )");
}

BOOST_AUTO_TEST_CASE(test13)
{
    output << (POLYNOMIAL(1, 1, 2) / POLYNOMIAL(2, 4, -4, 1));
    CHECK_OUTPUT("( 0 )");
}

BOOST_AUTO_TEST_CASE(test14)
{
    output << (POLYNOMIAL(3, -1, 4, -5, 2) / POLYNOMIAL(1, -1, 1));
    CHECK_OUTPUT("( 1, -3, 2 )");
}

BOOST_AUTO_TEST_CASE(test15)
{
    output << (POLYNOMIAL(3, -4, -4, 1, 1) / POLYNOMIAL(1, 1, 1));
    CHECK_OUTPUT("( -4, 0, 1 )");
}

BOOST_AUTO_TEST_CASE(test16)
{
    output << (POLYNOMIAL(2, 7, 7, 5) / POLYNOMIAL(1, 2, -4));
    CHECK_OUTPUT("( -19, -10 )");
}

BOOST_AUTO_TEST_CASE(test17)
{
    output << (POLYNOMIAL(2, 1, 2, -1) / POLYNOMIAL(2, 2, -6, 4));
    CHECK_OUTPUT("( -1 )");
}

BOOST_AUTO_TEST_CASE(test18)
{
    output << (POLYNOMIAL(3, -7, 5, -3, 7) / POLYNOMIAL(3, 7, 6, 4, -2));
    CHECK_OUTPUT("( -1 )");
}

BOOST_AUTO_TEST_CASE(test19)
{
    output << (POLYNOMIAL(4, 4, 2, 5, -2, 1) / POLYNOMIAL(2, 3, -3, -4));
    CHECK_OUTPUT("( -125, 44, -16 )");
}

BOOST_AUTO_TEST_CASE(test20)
{
    output << (POLYNOMIAL(5, 1, -1, -4, -5, 0, -7) / POLYNOMIAL(1, 2, 4) );
    CHECK_OUTPUT("( -11, -10, -108, 56, -112 )");
}

BOOST_AUTO_TEST_CASE(test21)
{
    output << (POLYNOMIAL(5, 4, -4, -5, 2, -7, -7) / POLYNOMIAL(1, -4, 3) );
    CHECK_OUTPUT("( -3712, -2541, -1602, -1323, -567 )");
}

BOOST_AUTO_TEST_CASE(test22)
{
    output << (POLYNOMIAL(6, 0, -5, -4, 6, 1, -4, 6) / POLYNOMIAL(3, 2, -5, 6, 7) );
    CHECK_OUTPUT("( -4628, 4501, -3136, 2058 )");
}

BOOST_AUTO_TEST_CASE(test23)
{
    output << (POLYNOMIAL(6, -1, 0, 2, 1, 3, 0, -1) / POLYNOMIAL(5, -4, 3, 1, 4, -7, 5));
    CHECK_OUTPUT("( -7, -5 )");
}

BOOST_AUTO_TEST_CASE(test24)
{
    output << (POLYNOMIAL(3, -4, -4, 1, 1) / POLYNOMIAL(2, -4, 0, 1));
    CHECK_OUTPUT("( 1, 1 )");
}

BOOST_AUTO_TEST_CASE(test25)
{
    POLYNOMIAL p1 = POLYNOMIAL(2, 0, 1, 2);
    POLYNOMIAL p2 = POLYNOMIAL(0, 4);
    output << p1 / p2;
    CHECK_OUTPUT("( 0, 1, 2 )");
}

// vim: fen
