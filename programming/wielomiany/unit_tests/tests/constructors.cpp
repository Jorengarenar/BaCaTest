#define BOOST_TEST_MODULE Constructors
#include "init_testing.hpp"

BOOST_AUTO_TEST_CASE(test0)
{
    POLYNOMIAL p0(2, 4, -6, 8);
    output << p0;
    CHECK_OUTPUT("( 2, -3, 4 )");

    POLYNOMIAL p1(4, 1, 0, -5, 0, 3);
    output << p1;
    CHECK_OUTPUT("( 1, 0, -5, 0, 3 )");
}
