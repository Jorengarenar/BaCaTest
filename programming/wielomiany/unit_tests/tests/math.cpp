#define BOOST_TEST_MODULE Math
#include "init_testing.hpp"

BOOST_AUTO_TEST_SUITE(addition)

BOOST_AUTO_TEST_CASE(test0)
{
    POLYNOMIAL a(2, 1, 2, 3);
    POLYNOMIAL b(2, 3, 0, 1);
    output << a - b + b - a;
    CHECK_OUTPUT("( 1, -1, -1 )");
}

BOOST_AUTO_TEST_CASE(test1)
{
    POLYNOMIAL p2(2, 3, 4, 5);
    POLYNOMIAL p3(6, 0, 0, 1, 2, 3, 4, 5);

    output << p2 + p3;
    CHECK_OUTPUT("( 3, 4, 6, 2, 3, 4, 5 )");
    output << p3 + p2;
    CHECK_OUTPUT("( 3, 4, 6, 2, 3, 4, 5 )");
    output << p2 - p3;
    CHECK_OUTPUT("( 3, 4, 4, -2, -3, -4, -5 )");
}

BOOST_AUTO_TEST_SUITE_END();

BOOST_AUTO_TEST_SUITE(multiplication);

BOOST_AUTO_TEST_CASE(test0)
{
    POLYNOMIAL p4(1, 2, 3);
    POLYNOMIAL p5(1, 3, 5);
    output << p4 * p5;
    CHECK_OUTPUT("( 6, 19, 15 )");
    output << p5 * p4;
    CHECK_OUTPUT("( 6, 19, 15 )");
}

BOOST_AUTO_TEST_CASE(test1)
{
    POLYNOMIAL p8(6, 1, 2, 3, 4, 1, 2, 7);
    output << p8 * POLYNOMIAL();
    CHECK_OUTPUT("( 0 )");
    output << POLYNOMIAL() * p8;
    CHECK_OUTPUT("( 0 )");
    output << p8 * POLYNOMIAL(0, 1);
    CHECK_OUTPUT("( 1, 2, 3, 4, 1, 2, 7 )");
    output << POLYNOMIAL(0, 1) * p8;
    CHECK_OUTPUT("( 1, 2, 3, 4, 1, 2, 7 )");
    output << p8 * POLYNOMIAL(1, 0, 1);
    CHECK_OUTPUT("( 0, 1, 2, 3, 4, 1, 2, 7 )");
    output << POLYNOMIAL(1, 0, 1) * p8;
    CHECK_OUTPUT("( 0, 1, 2, 3, 4, 1, 2, 7 )");
}

BOOST_AUTO_TEST_SUITE_END();


BOOST_AUTO_TEST_CASE(negation)
{
    POLYNOMIAL p2(2, 3, 4, 5);
    POLYNOMIAL p3(6, 0, 0, 1, 2, 3, 4, 5);
    output << -p2;
    CHECK_OUTPUT("( -3, -4, -5 )");
    output << -(-p2);
    CHECK_OUTPUT("( 3, 4, 5 )");
    output << -(-(-p2));
    CHECK_OUTPUT("( -3, -4, -5 )");
}
