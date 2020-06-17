#define BOOST_TEST_MODULE IncrementAndDecrement
#include "init_testing.hpp"

BOOST_AUTO_TEST_CASE(test0)
{
    POLYNOMIAL p1(0,1);
    output << ++p1;
    CHECK_OUTPUT("( 1 )");
}

BOOST_AUTO_TEST_CASE(test1)
{
    POLYNOMIAL p = POLYNOMIAL(3, 1, 2, 1, 1);
    output << (p++);
    CHECK_OUTPUT("( 1, 2, 1, 1 )");
    output << (p--);
    CHECK_OUTPUT("( 2, 3, 2, 2 )");
    output << (++p);
    CHECK_OUTPUT("( 2, 3, 2, 2 )");
}

BOOST_AUTO_TEST_CASE(test2)
{
    POLYNOMIAL p6(3, 1, 3, 4, -1);
    POLYNOMIAL p7(2, 6, 8, -7);

    p7 = ++p6;
    output << p6;
    CHECK_OUTPUT("( 2, 4, 5 )");
    output << p7;
    CHECK_OUTPUT("( 2, 4, 5 )");
    p6 = p7--;
    output << p6;
    CHECK_OUTPUT("( 2, 4, 5 )");
    output << p7;
    CHECK_OUTPUT("( 1, 3, 4 )");
}
