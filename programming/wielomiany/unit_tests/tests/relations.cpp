#define BOOST_TEST_MODULE Relations
#include "init_testing.hpp"

BOOST_AUTO_TEST_CASE(test0)
{
    POLYNOMIAL p6(3, 1, 3, 4, -1);
    POLYNOMIAL p7(2, 6, 8, -7);
    BOOST_CHECK_EQUAL(p6 > p7, true);
    BOOST_CHECK_EQUAL(p6 >= p7, true);
    BOOST_CHECK_EQUAL(p6 < p7, false);
    BOOST_CHECK_EQUAL(p6 <= p7, false);
    BOOST_CHECK_EQUAL(p6 == p7, false);
    BOOST_CHECK_EQUAL(p6 != p7, true);
}

BOOST_AUTO_TEST_CASE(test1)
{
    POLYNOMIAL p1(0,0);
    POLYNOMIAL p2(1, 0, 4);
    BOOST_CHECK_EQUAL(p1 == p2, false);
    BOOST_CHECK_EQUAL(p1 < p2, true);
    BOOST_CHECK_EQUAL(p1 > p2, false);
    BOOST_CHECK_EQUAL(p1 != p2, true);
    BOOST_CHECK_EQUAL(p1 >= p2, false);
    BOOST_CHECK_EQUAL(p1 <= p2, true);
}
