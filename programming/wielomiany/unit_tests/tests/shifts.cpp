#define BOOST_TEST_MODULE Shifts
#include "init_testing.hpp"

#include <sstream>

BOOST_AUTO_TEST_CASE(test0)
{
    POLYNOMIAL z;
    output << (z);
    CHECK_OUTPUT("( 0 )");
    output << (z>>0);
    CHECK_OUTPUT("( 0 )");
    output << (z>>1);
    CHECK_OUTPUT("( 0 )");
    output << (z>>2);
    CHECK_OUTPUT("( 0 )");
    output << (z>>3);
    CHECK_OUTPUT("( 0 )");
    output << (z>>4);
    CHECK_OUTPUT("( 0 )");
}

BOOST_AUTO_TEST_CASE(test1)
{
    output << (POLYNOMIAL() << 10);
    CHECK_OUTPUT("( 0 )");
    output << (POLYNOMIAL() >> 10);
    CHECK_OUTPUT("( 0 )");
    output << ((POLYNOMIAL(0, 1) << 10));
    CHECK_OUTPUT("( 0 )");
    output << ((POLYNOMIAL(0, 1) >> 10));
    CHECK_OUTPUT("( 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 )");
    output << ((POLYNOMIAL(4, 0, 1, 2, 3, 4) >> 10) << 10);
    CHECK_OUTPUT("( 0, 1, 2, 3, 4 )");
    output << (((POLYNOMIAL(4, 0, 1, 2, 3, 4) << 10) >> 10));
    CHECK_OUTPUT("( 0 )");
    output << (POLYNOMIAL(4, 0, 1, 2, 3, 4) >> -10);
    CHECK_OUTPUT("( 0 )");
    output << ((POLYNOMIAL(4, 0, 1, 2, 3, 4) << -10));
    CHECK_OUTPUT("( 0 )");
    output << (((POLYNOMIAL(4, 0, 1, 2, 3, 4) >> -10) << -10));
    CHECK_OUTPUT("( 0 )");
    output << (((POLYNOMIAL(4, 0, 1, 2, 3, 4) << -10) >> -10));
    CHECK_OUTPUT("( 0 )");
    output << (POLYNOMIAL(1, 0, 2) >> -10);
    CHECK_OUTPUT("( 0 )");
    output << ((POLYNOMIAL(1, 0, 2) << 1));
    CHECK_OUTPUT("( 1 )");
}

BOOST_AUTO_TEST_CASE(test2)
{
    POLYNOMIAL p6(3, 1, 3, 4, -1);
    POLYNOMIAL p7(2, 6, 8, -7);
    output << (p6 << 1);
    CHECK_OUTPUT("( 3, 4, -1 )");
    output << (p7 >> 2);
    CHECK_OUTPUT("( 0, 0, 6, 8, -7 )");
    output << p6;
    CHECK_OUTPUT("( 1, 3, 4, -1 )");
    output << p7;
    CHECK_OUTPUT("( 6, 8, -7 )");
}

BOOST_AUTO_TEST_CASE(test3)
{
    POLYNOMIAL p2(4,1,2,3,4,5);
    //stringstream("4 1 2 3 4 5") >> p2;
    output << p2;
    CHECK_OUTPUT("( 1, 2, 3, 4, 5 )" );

    POLYNOMIAL p3 = p2;
    output << p3;
    CHECK_OUTPUT("( 1, 2, 3, 4, 5 )");

    p2 <<= 2;
    p3 >>= 2;
    output << p2;
    CHECK_OUTPUT("( 3, 4, 5 )");
    output << p3;
    CHECK_OUTPUT("( 0, 0, 1, 2, 3, 4, 5 )");
}
