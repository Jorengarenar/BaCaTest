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

struct F {
    POLYNOMIAL a;
    POLYNOMIAL b;
    POLYNOMIAL aa;
    POLYNOMIAL bb;
    POLYNOMIAL c;
    POLYNOMIAL d;
    POLYNOMIAL e;
    POLYNOMIAL f;

    F() :
        aa(POLYNOMIAL(0, 1)),
        bb(POLYNOMIAL(0, -1)),
        c(POLYNOMIAL(1, 2, 10)),
        d(POLYNOMIAL(0, 10)),
        e(POLYNOMIAL(2, 500, 10, 50000))
    {}
};

BOOST_FIXTURE_TEST_SUITE(big, F)

    BOOST_AUTO_TEST_CASE(test0)    {  BOOST_CHECK_EQUAL((a ==  a) , 1); }
    BOOST_AUTO_TEST_CASE(test1)    {  BOOST_CHECK_EQUAL((a !=  a) , 0); }
    BOOST_AUTO_TEST_CASE(test2)    {  BOOST_CHECK_EQUAL((a >   a) , 0); }
    BOOST_AUTO_TEST_CASE(test3)    {  BOOST_CHECK_EQUAL((a >=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test4)    {  BOOST_CHECK_EQUAL((a <   a) , 0); }
    BOOST_AUTO_TEST_CASE(test5)    {  BOOST_CHECK_EQUAL((a <=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test6)    {  BOOST_CHECK_EQUAL((a ==  b) , 1); }
    BOOST_AUTO_TEST_CASE(test7)    {  BOOST_CHECK_EQUAL((a !=  b) , 0); }
    BOOST_AUTO_TEST_CASE(test8)    {  BOOST_CHECK_EQUAL((a >   b) , 0); }
    BOOST_AUTO_TEST_CASE(test9)    {  BOOST_CHECK_EQUAL((a >=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test10)   {  BOOST_CHECK_EQUAL((a <   b) , 0); }
    BOOST_AUTO_TEST_CASE(test11)   {  BOOST_CHECK_EQUAL((a <=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test12)   {  BOOST_CHECK_EQUAL((a ==  aa), 0); }
    BOOST_AUTO_TEST_CASE(test13)   {  BOOST_CHECK_EQUAL((a !=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test14)   {  BOOST_CHECK_EQUAL((a >   aa), 0); }
    BOOST_AUTO_TEST_CASE(test15)   {  BOOST_CHECK_EQUAL((a >=  aa), 0); }
    BOOST_AUTO_TEST_CASE(test16)   {  BOOST_CHECK_EQUAL((a <   aa), 1); }
    BOOST_AUTO_TEST_CASE(test17)   {  BOOST_CHECK_EQUAL((a <=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test18)   {  BOOST_CHECK_EQUAL((a ==  bb), 0); }
    BOOST_AUTO_TEST_CASE(test19)   {  BOOST_CHECK_EQUAL((a !=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test20)   {  BOOST_CHECK_EQUAL((a >   bb), 1); }
    BOOST_AUTO_TEST_CASE(test21)   {  BOOST_CHECK_EQUAL((a >=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test22)   {  BOOST_CHECK_EQUAL((a <   bb), 0); }
    BOOST_AUTO_TEST_CASE(test23)   {  BOOST_CHECK_EQUAL((a <=  bb), 0); }
    BOOST_AUTO_TEST_CASE(test24)   {  BOOST_CHECK_EQUAL((a ==  c) , 0); }
    BOOST_AUTO_TEST_CASE(test25)   {  BOOST_CHECK_EQUAL((a !=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test26)   {  BOOST_CHECK_EQUAL((a >   c) , 0); }
    BOOST_AUTO_TEST_CASE(test27)   {  BOOST_CHECK_EQUAL((a >=  c) , 0); }
    BOOST_AUTO_TEST_CASE(test28)   {  BOOST_CHECK_EQUAL((a <   c) , 1); }
    BOOST_AUTO_TEST_CASE(test29)   {  BOOST_CHECK_EQUAL((a <=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test30)   {  BOOST_CHECK_EQUAL((a ==  d) , 0); }
    BOOST_AUTO_TEST_CASE(test31)   {  BOOST_CHECK_EQUAL((a !=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test32)   {  BOOST_CHECK_EQUAL((a >   d) , 0); }
    BOOST_AUTO_TEST_CASE(test33)   {  BOOST_CHECK_EQUAL((a >=  d) , 0); }
    BOOST_AUTO_TEST_CASE(test34)   {  BOOST_CHECK_EQUAL((a <   d) , 1); }
    BOOST_AUTO_TEST_CASE(test35)   {  BOOST_CHECK_EQUAL((a <=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test36)   {  BOOST_CHECK_EQUAL((a ==  e) , 0); }
    BOOST_AUTO_TEST_CASE(test37)   {  BOOST_CHECK_EQUAL((a !=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test38)   {  BOOST_CHECK_EQUAL((a >   e) , 0); }
    BOOST_AUTO_TEST_CASE(test39)   {  BOOST_CHECK_EQUAL((a >=  e) , 0); }
    BOOST_AUTO_TEST_CASE(test40)   {  BOOST_CHECK_EQUAL((a <   e) , 1); }
    BOOST_AUTO_TEST_CASE(test41)   {  BOOST_CHECK_EQUAL((a <=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test42)   {  BOOST_CHECK_EQUAL((a ==  f) , 1); }
    BOOST_AUTO_TEST_CASE(test43)   {  BOOST_CHECK_EQUAL((a !=  f) , 0); }
    BOOST_AUTO_TEST_CASE(test44)   {  BOOST_CHECK_EQUAL((a >   f) , 0); }
    BOOST_AUTO_TEST_CASE(test45)   {  BOOST_CHECK_EQUAL((a >=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test46)   {  BOOST_CHECK_EQUAL((a <   f) , 0); }
    BOOST_AUTO_TEST_CASE(test47)   {  BOOST_CHECK_EQUAL((a <=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test48)   {  BOOST_CHECK_EQUAL((b ==  a) , 1); }
    BOOST_AUTO_TEST_CASE(test49)   {  BOOST_CHECK_EQUAL((b !=  a) , 0); }
    BOOST_AUTO_TEST_CASE(test50)   {  BOOST_CHECK_EQUAL((b >   a) , 0); }
    BOOST_AUTO_TEST_CASE(test51)   {  BOOST_CHECK_EQUAL((b >=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test52)   {  BOOST_CHECK_EQUAL((b <   a) , 0); }
    BOOST_AUTO_TEST_CASE(test53)   {  BOOST_CHECK_EQUAL((b <=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test54)   {  BOOST_CHECK_EQUAL((b ==  b) , 1); }
    BOOST_AUTO_TEST_CASE(test55)   {  BOOST_CHECK_EQUAL((b !=  b) , 0); }
    BOOST_AUTO_TEST_CASE(test56)   {  BOOST_CHECK_EQUAL((b >   b) , 0); }
    BOOST_AUTO_TEST_CASE(test57)   {  BOOST_CHECK_EQUAL((b >=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test58)   {  BOOST_CHECK_EQUAL((b <   b) , 0); }
    BOOST_AUTO_TEST_CASE(test59)   {  BOOST_CHECK_EQUAL((b <=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test60)   {  BOOST_CHECK_EQUAL((b ==  aa), 0); }
    BOOST_AUTO_TEST_CASE(test61)   {  BOOST_CHECK_EQUAL((b !=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test62)   {  BOOST_CHECK_EQUAL((b >   aa), 0); }
    BOOST_AUTO_TEST_CASE(test63)   {  BOOST_CHECK_EQUAL((b >=  aa), 0); }
    BOOST_AUTO_TEST_CASE(test64)   {  BOOST_CHECK_EQUAL((b <   aa), 1); }
    BOOST_AUTO_TEST_CASE(test65)   {  BOOST_CHECK_EQUAL((b <=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test66)   {  BOOST_CHECK_EQUAL((b ==  bb), 0); }
    BOOST_AUTO_TEST_CASE(test67)   {  BOOST_CHECK_EQUAL((b !=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test68)   {  BOOST_CHECK_EQUAL((b >   bb), 1); }
    BOOST_AUTO_TEST_CASE(test69)   {  BOOST_CHECK_EQUAL((b >=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test70)   {  BOOST_CHECK_EQUAL((b <   bb), 0); }
    BOOST_AUTO_TEST_CASE(test71)   {  BOOST_CHECK_EQUAL((b <=  bb), 0); }
    BOOST_AUTO_TEST_CASE(test72)   {  BOOST_CHECK_EQUAL((b ==  c) , 0); }
    BOOST_AUTO_TEST_CASE(test73)   {  BOOST_CHECK_EQUAL((b !=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test74)   {  BOOST_CHECK_EQUAL((b >   c) , 0); }
    BOOST_AUTO_TEST_CASE(test75)   {  BOOST_CHECK_EQUAL((b >=  c) , 0); }
    BOOST_AUTO_TEST_CASE(test76)   {  BOOST_CHECK_EQUAL((b <   c) , 1); }
    BOOST_AUTO_TEST_CASE(test77)   {  BOOST_CHECK_EQUAL((b <=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test78)   {  BOOST_CHECK_EQUAL((b ==  d) , 0); }
    BOOST_AUTO_TEST_CASE(test79)   {  BOOST_CHECK_EQUAL((b !=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test80)   {  BOOST_CHECK_EQUAL((b >   d) , 0); }
    BOOST_AUTO_TEST_CASE(test81)   {  BOOST_CHECK_EQUAL((b >=  d) , 0); }
    BOOST_AUTO_TEST_CASE(test82)   {  BOOST_CHECK_EQUAL((b <   d) , 1); }
    BOOST_AUTO_TEST_CASE(test83)   {  BOOST_CHECK_EQUAL((b <=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test84)   {  BOOST_CHECK_EQUAL((b ==  e) , 0); }
    BOOST_AUTO_TEST_CASE(test85)   {  BOOST_CHECK_EQUAL((b !=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test86)   {  BOOST_CHECK_EQUAL((b >   e) , 0); }
    BOOST_AUTO_TEST_CASE(test87)   {  BOOST_CHECK_EQUAL((b >=  e) , 0); }
    BOOST_AUTO_TEST_CASE(test88)   {  BOOST_CHECK_EQUAL((b <   e) , 1); }
    BOOST_AUTO_TEST_CASE(test89)   {  BOOST_CHECK_EQUAL((b <=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test90)   {  BOOST_CHECK_EQUAL((b ==  f) , 1); }
    BOOST_AUTO_TEST_CASE(test91)   {  BOOST_CHECK_EQUAL((b !=  f) , 0); }
    BOOST_AUTO_TEST_CASE(test92)   {  BOOST_CHECK_EQUAL((b >   f) , 0); }
    BOOST_AUTO_TEST_CASE(test93)   {  BOOST_CHECK_EQUAL((b >=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test94)   {  BOOST_CHECK_EQUAL((b <   f) , 0); }
    BOOST_AUTO_TEST_CASE(test95)   {  BOOST_CHECK_EQUAL((b <=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test96)   {  BOOST_CHECK_EQUAL((aa==  a) , 0); }
    BOOST_AUTO_TEST_CASE(test97)   {  BOOST_CHECK_EQUAL((aa!=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test98)   {  BOOST_CHECK_EQUAL((aa>   a) , 1); }
    BOOST_AUTO_TEST_CASE(test99)   {  BOOST_CHECK_EQUAL((aa>=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test100)  {  BOOST_CHECK_EQUAL((aa<   a) , 0); }
    BOOST_AUTO_TEST_CASE(test101)  {  BOOST_CHECK_EQUAL((aa<=  a) , 0); }
    BOOST_AUTO_TEST_CASE(test102)  {  BOOST_CHECK_EQUAL((aa==  b) , 0); }
    BOOST_AUTO_TEST_CASE(test103)  {  BOOST_CHECK_EQUAL((aa!=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test104)  {  BOOST_CHECK_EQUAL((aa>   b) , 1); }
    BOOST_AUTO_TEST_CASE(test105)  {  BOOST_CHECK_EQUAL((aa>=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test106)  {  BOOST_CHECK_EQUAL((aa<   b) , 0); }
    BOOST_AUTO_TEST_CASE(test107)  {  BOOST_CHECK_EQUAL((aa<=  b) , 0); }
    BOOST_AUTO_TEST_CASE(test108)  {  BOOST_CHECK_EQUAL((aa==  aa), 1); }
    BOOST_AUTO_TEST_CASE(test109)  {  BOOST_CHECK_EQUAL((aa!=  aa), 0); }
    BOOST_AUTO_TEST_CASE(test110)  {  BOOST_CHECK_EQUAL((aa>   aa), 0); }
    BOOST_AUTO_TEST_CASE(test111)  {  BOOST_CHECK_EQUAL((aa>=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test112)  {  BOOST_CHECK_EQUAL((aa<   aa), 0); }
    BOOST_AUTO_TEST_CASE(test113)  {  BOOST_CHECK_EQUAL((aa<=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test114)  {  BOOST_CHECK_EQUAL((aa==  bb), 0); }
    BOOST_AUTO_TEST_CASE(test115)  {  BOOST_CHECK_EQUAL((aa!=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test116)  {  BOOST_CHECK_EQUAL((aa>   bb), 1); }
    BOOST_AUTO_TEST_CASE(test117)  {  BOOST_CHECK_EQUAL((aa>=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test118)  {  BOOST_CHECK_EQUAL((aa<   bb), 0); }
    BOOST_AUTO_TEST_CASE(test119)  {  BOOST_CHECK_EQUAL((aa<=  bb), 0); }
    BOOST_AUTO_TEST_CASE(test120)  {  BOOST_CHECK_EQUAL((aa==  c) , 0); }
    BOOST_AUTO_TEST_CASE(test121)  {  BOOST_CHECK_EQUAL((aa!=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test122)  {  BOOST_CHECK_EQUAL((aa>   c) , 0); }
    BOOST_AUTO_TEST_CASE(test123)  {  BOOST_CHECK_EQUAL((aa>=  c) , 0); }
    BOOST_AUTO_TEST_CASE(test124)  {  BOOST_CHECK_EQUAL((aa<   c) , 1); }
    BOOST_AUTO_TEST_CASE(test125)  {  BOOST_CHECK_EQUAL((aa<=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test126)  {  BOOST_CHECK_EQUAL((aa==  d) , 1); }
    BOOST_AUTO_TEST_CASE(test127)  {  BOOST_CHECK_EQUAL((aa!=  d) , 0); }
    BOOST_AUTO_TEST_CASE(test128)  {  BOOST_CHECK_EQUAL((aa>   d) , 0); }
    BOOST_AUTO_TEST_CASE(test129)  {  BOOST_CHECK_EQUAL((aa>=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test130)  {  BOOST_CHECK_EQUAL((aa<   d) , 0); }
    BOOST_AUTO_TEST_CASE(test131)  {  BOOST_CHECK_EQUAL((aa<=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test132)  {  BOOST_CHECK_EQUAL((aa==  e) , 0); }
    BOOST_AUTO_TEST_CASE(test133)  {  BOOST_CHECK_EQUAL((aa!=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test134)  {  BOOST_CHECK_EQUAL((aa>   e) , 0); }
    BOOST_AUTO_TEST_CASE(test135)  {  BOOST_CHECK_EQUAL((aa>=  e) , 0); }
    BOOST_AUTO_TEST_CASE(test136)  {  BOOST_CHECK_EQUAL((aa<   e) , 1); }
    BOOST_AUTO_TEST_CASE(test137)  {  BOOST_CHECK_EQUAL((aa<=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test138)  {  BOOST_CHECK_EQUAL((aa==  f) , 0); }
    BOOST_AUTO_TEST_CASE(test139)  {  BOOST_CHECK_EQUAL((aa!=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test140)  {  BOOST_CHECK_EQUAL((aa>   f) , 1); }
    BOOST_AUTO_TEST_CASE(test141)  {  BOOST_CHECK_EQUAL((aa>=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test142)  {  BOOST_CHECK_EQUAL((aa<   f) , 0); }
    BOOST_AUTO_TEST_CASE(test143)  {  BOOST_CHECK_EQUAL((aa<=  f) , 0); }
    BOOST_AUTO_TEST_CASE(test144)  {  BOOST_CHECK_EQUAL((bb==  a) , 0); }
    BOOST_AUTO_TEST_CASE(test145)  {  BOOST_CHECK_EQUAL((bb!=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test146)  {  BOOST_CHECK_EQUAL((bb>   a) , 0); }
    BOOST_AUTO_TEST_CASE(test147)  {  BOOST_CHECK_EQUAL((bb>=  a) , 0); }
    BOOST_AUTO_TEST_CASE(test148)  {  BOOST_CHECK_EQUAL((bb<   a) , 1); }
    BOOST_AUTO_TEST_CASE(test149)  {  BOOST_CHECK_EQUAL((bb<=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test150)  {  BOOST_CHECK_EQUAL((bb==  b) , 0); }
    BOOST_AUTO_TEST_CASE(test151)  {  BOOST_CHECK_EQUAL((bb!=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test152)  {  BOOST_CHECK_EQUAL((bb>   b) , 0); }
    BOOST_AUTO_TEST_CASE(test153)  {  BOOST_CHECK_EQUAL((bb>=  b) , 0); }
    BOOST_AUTO_TEST_CASE(test154)  {  BOOST_CHECK_EQUAL((bb<   b) , 1); }
    BOOST_AUTO_TEST_CASE(test155)  {  BOOST_CHECK_EQUAL((bb<=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test156)  {  BOOST_CHECK_EQUAL((bb==  aa), 0); }
    BOOST_AUTO_TEST_CASE(test157)  {  BOOST_CHECK_EQUAL((bb!=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test158)  {  BOOST_CHECK_EQUAL((bb>   aa), 0); }
    BOOST_AUTO_TEST_CASE(test159)  {  BOOST_CHECK_EQUAL((bb>=  aa), 0); }
    BOOST_AUTO_TEST_CASE(test160)  {  BOOST_CHECK_EQUAL((bb<   aa), 1); }
    BOOST_AUTO_TEST_CASE(test161)  {  BOOST_CHECK_EQUAL((bb<=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test162)  {  BOOST_CHECK_EQUAL((bb==  bb), 1); }
    BOOST_AUTO_TEST_CASE(test163)  {  BOOST_CHECK_EQUAL((bb!=  bb), 0); }
    BOOST_AUTO_TEST_CASE(test164)  {  BOOST_CHECK_EQUAL((bb>   bb), 0); }
    BOOST_AUTO_TEST_CASE(test165)  {  BOOST_CHECK_EQUAL((bb>=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test166)  {  BOOST_CHECK_EQUAL((bb<   bb), 0); }
    BOOST_AUTO_TEST_CASE(test167)  {  BOOST_CHECK_EQUAL((bb<=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test168)  {  BOOST_CHECK_EQUAL((bb==  c) , 0); }
    BOOST_AUTO_TEST_CASE(test169)  {  BOOST_CHECK_EQUAL((bb!=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test170)  {  BOOST_CHECK_EQUAL((bb>   c) , 0); }
    BOOST_AUTO_TEST_CASE(test171)  {  BOOST_CHECK_EQUAL((bb>=  c) , 0); }
    BOOST_AUTO_TEST_CASE(test172)  {  BOOST_CHECK_EQUAL((bb<   c) , 1); }
    BOOST_AUTO_TEST_CASE(test173)  {  BOOST_CHECK_EQUAL((bb<=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test174)  {  BOOST_CHECK_EQUAL((bb==  d) , 0); }
    BOOST_AUTO_TEST_CASE(test175)  {  BOOST_CHECK_EQUAL((bb!=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test176)  {  BOOST_CHECK_EQUAL((bb>   d) , 0); }
    BOOST_AUTO_TEST_CASE(test177)  {  BOOST_CHECK_EQUAL((bb>=  d) , 0); }
    BOOST_AUTO_TEST_CASE(test178)  {  BOOST_CHECK_EQUAL((bb<   d) , 1); }
    BOOST_AUTO_TEST_CASE(test179)  {  BOOST_CHECK_EQUAL((bb<=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test180)  {  BOOST_CHECK_EQUAL((bb==  e) , 0); }
    BOOST_AUTO_TEST_CASE(test181)  {  BOOST_CHECK_EQUAL((bb!=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test182)  {  BOOST_CHECK_EQUAL((bb>   e) , 0); }
    BOOST_AUTO_TEST_CASE(test183)  {  BOOST_CHECK_EQUAL((bb>=  e) , 0); }
    BOOST_AUTO_TEST_CASE(test184)  {  BOOST_CHECK_EQUAL((bb<   e) , 1); }
    BOOST_AUTO_TEST_CASE(test185)  {  BOOST_CHECK_EQUAL((bb<=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test186)  {  BOOST_CHECK_EQUAL((bb==  f) , 0); }
    BOOST_AUTO_TEST_CASE(test187)  {  BOOST_CHECK_EQUAL((bb!=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test188)  {  BOOST_CHECK_EQUAL((bb>   f) , 0); }
    BOOST_AUTO_TEST_CASE(test189)  {  BOOST_CHECK_EQUAL((bb>=  f) , 0); }
    BOOST_AUTO_TEST_CASE(test190)  {  BOOST_CHECK_EQUAL((bb<   f) , 1); }
    BOOST_AUTO_TEST_CASE(test191)  {  BOOST_CHECK_EQUAL((bb<=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test192)  {  BOOST_CHECK_EQUAL((c ==  a) , 0); }
    BOOST_AUTO_TEST_CASE(test193)  {  BOOST_CHECK_EQUAL((c !=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test194)  {  BOOST_CHECK_EQUAL((c >   a) , 1); }
    BOOST_AUTO_TEST_CASE(test195)  {  BOOST_CHECK_EQUAL((c >=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test196)  {  BOOST_CHECK_EQUAL((c <   a) , 0); }
    BOOST_AUTO_TEST_CASE(test197)  {  BOOST_CHECK_EQUAL((c <=  a) , 0); }
    BOOST_AUTO_TEST_CASE(test198)  {  BOOST_CHECK_EQUAL((c ==  b) , 0); }
    BOOST_AUTO_TEST_CASE(test199)  {  BOOST_CHECK_EQUAL((c !=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test200)  {  BOOST_CHECK_EQUAL((c >   b) , 1); }
    BOOST_AUTO_TEST_CASE(test201)  {  BOOST_CHECK_EQUAL((c >=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test202)  {  BOOST_CHECK_EQUAL((c <   b) , 0); }
    BOOST_AUTO_TEST_CASE(test203)  {  BOOST_CHECK_EQUAL((c <=  b) , 0); }
    BOOST_AUTO_TEST_CASE(test204)  {  BOOST_CHECK_EQUAL((c ==  aa), 0); }
    BOOST_AUTO_TEST_CASE(test205)  {  BOOST_CHECK_EQUAL((c !=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test206)  {  BOOST_CHECK_EQUAL((c >   aa), 1); }
    BOOST_AUTO_TEST_CASE(test207)  {  BOOST_CHECK_EQUAL((c >=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test208)  {  BOOST_CHECK_EQUAL((c <   aa), 0); }
    BOOST_AUTO_TEST_CASE(test209)  {  BOOST_CHECK_EQUAL((c <=  aa), 0); }
    BOOST_AUTO_TEST_CASE(test210)  {  BOOST_CHECK_EQUAL((c ==  bb), 0); }
    BOOST_AUTO_TEST_CASE(test211)  {  BOOST_CHECK_EQUAL((c !=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test212)  {  BOOST_CHECK_EQUAL((c >   bb), 1); }
    BOOST_AUTO_TEST_CASE(test213)  {  BOOST_CHECK_EQUAL((c >=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test214)  {  BOOST_CHECK_EQUAL((c <   bb), 0); }
    BOOST_AUTO_TEST_CASE(test215)  {  BOOST_CHECK_EQUAL((c <=  bb), 0); }
    BOOST_AUTO_TEST_CASE(test216)  {  BOOST_CHECK_EQUAL((c ==  c) , 1); }
    BOOST_AUTO_TEST_CASE(test217)  {  BOOST_CHECK_EQUAL((c !=  c) , 0); }
    BOOST_AUTO_TEST_CASE(test218)  {  BOOST_CHECK_EQUAL((c >   c) , 0); }
    BOOST_AUTO_TEST_CASE(test219)  {  BOOST_CHECK_EQUAL((c >=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test220)  {  BOOST_CHECK_EQUAL((c <   c) , 0); }
    BOOST_AUTO_TEST_CASE(test221)  {  BOOST_CHECK_EQUAL((c <=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test222)  {  BOOST_CHECK_EQUAL((c ==  d) , 0); }
    BOOST_AUTO_TEST_CASE(test223)  {  BOOST_CHECK_EQUAL((c !=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test224)  {  BOOST_CHECK_EQUAL((c >   d) , 1); }
    BOOST_AUTO_TEST_CASE(test225)  {  BOOST_CHECK_EQUAL((c >=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test226)  {  BOOST_CHECK_EQUAL((c <   d) , 0); }
    BOOST_AUTO_TEST_CASE(test227)  {  BOOST_CHECK_EQUAL((c <=  d) , 0); }
    BOOST_AUTO_TEST_CASE(test228)  {  BOOST_CHECK_EQUAL((c ==  e) , 0); }
    BOOST_AUTO_TEST_CASE(test229)  {  BOOST_CHECK_EQUAL((c !=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test230)  {  BOOST_CHECK_EQUAL((c >   e) , 0); }
    BOOST_AUTO_TEST_CASE(test231)  {  BOOST_CHECK_EQUAL((c >=  e) , 0); }
    BOOST_AUTO_TEST_CASE(test232)  {  BOOST_CHECK_EQUAL((c <   e) , 1); }
    BOOST_AUTO_TEST_CASE(test233)  {  BOOST_CHECK_EQUAL((c <=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test234)  {  BOOST_CHECK_EQUAL((c ==  f) , 0); }
    BOOST_AUTO_TEST_CASE(test235)  {  BOOST_CHECK_EQUAL((c !=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test236)  {  BOOST_CHECK_EQUAL((c >   f) , 1); }
    BOOST_AUTO_TEST_CASE(test237)  {  BOOST_CHECK_EQUAL((c >=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test238)  {  BOOST_CHECK_EQUAL((c <   f) , 0); }
    BOOST_AUTO_TEST_CASE(test239)  {  BOOST_CHECK_EQUAL((c <=  f) , 0); }
    BOOST_AUTO_TEST_CASE(test240)  {  BOOST_CHECK_EQUAL((d ==  a) , 0); }
    BOOST_AUTO_TEST_CASE(test241)  {  BOOST_CHECK_EQUAL((d !=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test242)  {  BOOST_CHECK_EQUAL((d >   a) , 1); }
    BOOST_AUTO_TEST_CASE(test243)  {  BOOST_CHECK_EQUAL((d >=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test244)  {  BOOST_CHECK_EQUAL((d <   a) , 0); }
    BOOST_AUTO_TEST_CASE(test245)  {  BOOST_CHECK_EQUAL((d <=  a) , 0); }
    BOOST_AUTO_TEST_CASE(test246)  {  BOOST_CHECK_EQUAL((d ==  b) , 0); }
    BOOST_AUTO_TEST_CASE(test247)  {  BOOST_CHECK_EQUAL((d !=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test248)  {  BOOST_CHECK_EQUAL((d >   b) , 1); }
    BOOST_AUTO_TEST_CASE(test249)  {  BOOST_CHECK_EQUAL((d >=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test250)  {  BOOST_CHECK_EQUAL((d <   b) , 0); }
    BOOST_AUTO_TEST_CASE(test251)  {  BOOST_CHECK_EQUAL((d <=  b) , 0); }
    BOOST_AUTO_TEST_CASE(test252)  {  BOOST_CHECK_EQUAL((d ==  aa), 1); }
    BOOST_AUTO_TEST_CASE(test253)  {  BOOST_CHECK_EQUAL((d !=  aa), 0); }
    BOOST_AUTO_TEST_CASE(test254)  {  BOOST_CHECK_EQUAL((d >   aa), 0); }
    BOOST_AUTO_TEST_CASE(test255)  {  BOOST_CHECK_EQUAL((d >=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test256)  {  BOOST_CHECK_EQUAL((d <   aa), 0); }
    BOOST_AUTO_TEST_CASE(test257)  {  BOOST_CHECK_EQUAL((d <=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test258)  {  BOOST_CHECK_EQUAL((d ==  bb), 0); }
    BOOST_AUTO_TEST_CASE(test259)  {  BOOST_CHECK_EQUAL((d !=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test260)  {  BOOST_CHECK_EQUAL((d >   bb), 1); }
    BOOST_AUTO_TEST_CASE(test261)  {  BOOST_CHECK_EQUAL((d >=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test262)  {  BOOST_CHECK_EQUAL((d <   bb), 0); }
    BOOST_AUTO_TEST_CASE(test263)  {  BOOST_CHECK_EQUAL((d <=  bb), 0); }
    BOOST_AUTO_TEST_CASE(test264)  {  BOOST_CHECK_EQUAL((d ==  c) , 0); }
    BOOST_AUTO_TEST_CASE(test265)  {  BOOST_CHECK_EQUAL((d !=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test266)  {  BOOST_CHECK_EQUAL((d >   c) , 0); }
    BOOST_AUTO_TEST_CASE(test267)  {  BOOST_CHECK_EQUAL((d >=  c) , 0); }
    BOOST_AUTO_TEST_CASE(test268)  {  BOOST_CHECK_EQUAL((d <   c) , 1); }
    BOOST_AUTO_TEST_CASE(test269)  {  BOOST_CHECK_EQUAL((d <=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test270)  {  BOOST_CHECK_EQUAL((d ==  d) , 1); }
    BOOST_AUTO_TEST_CASE(test271)  {  BOOST_CHECK_EQUAL((d !=  d) , 0); }
    BOOST_AUTO_TEST_CASE(test272)  {  BOOST_CHECK_EQUAL((d >   d) , 0); }
    BOOST_AUTO_TEST_CASE(test273)  {  BOOST_CHECK_EQUAL((d >=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test274)  {  BOOST_CHECK_EQUAL((d <   d) , 0); }
    BOOST_AUTO_TEST_CASE(test275)  {  BOOST_CHECK_EQUAL((d <=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test276)  {  BOOST_CHECK_EQUAL((d ==  e) , 0); }
    BOOST_AUTO_TEST_CASE(test277)  {  BOOST_CHECK_EQUAL((d !=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test278)  {  BOOST_CHECK_EQUAL((d >   e) , 0); }
    BOOST_AUTO_TEST_CASE(test279)  {  BOOST_CHECK_EQUAL((d >=  e) , 0); }
    BOOST_AUTO_TEST_CASE(test280)  {  BOOST_CHECK_EQUAL((d <   e) , 1); }
    BOOST_AUTO_TEST_CASE(test281)  {  BOOST_CHECK_EQUAL((d <=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test282)  {  BOOST_CHECK_EQUAL((d ==  f) , 0); }
    BOOST_AUTO_TEST_CASE(test283)  {  BOOST_CHECK_EQUAL((d !=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test284)  {  BOOST_CHECK_EQUAL((d >   f) , 1); }
    BOOST_AUTO_TEST_CASE(test285)  {  BOOST_CHECK_EQUAL((d >=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test286)  {  BOOST_CHECK_EQUAL((d <   f) , 0); }
    BOOST_AUTO_TEST_CASE(test287)  {  BOOST_CHECK_EQUAL((d <=  f) , 0); }
    BOOST_AUTO_TEST_CASE(test288)  {  BOOST_CHECK_EQUAL((e ==  a) , 0); }
    BOOST_AUTO_TEST_CASE(test289)  {  BOOST_CHECK_EQUAL((e !=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test290)  {  BOOST_CHECK_EQUAL((e >   a) , 1); }
    BOOST_AUTO_TEST_CASE(test291)  {  BOOST_CHECK_EQUAL((e >=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test292)  {  BOOST_CHECK_EQUAL((e <   a) , 0); }
    BOOST_AUTO_TEST_CASE(test293)  {  BOOST_CHECK_EQUAL((e <=  a) , 0); }
    BOOST_AUTO_TEST_CASE(test294)  {  BOOST_CHECK_EQUAL((e ==  b) , 0); }
    BOOST_AUTO_TEST_CASE(test295)  {  BOOST_CHECK_EQUAL((e !=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test296)  {  BOOST_CHECK_EQUAL((e >   b) , 1); }
    BOOST_AUTO_TEST_CASE(test297)  {  BOOST_CHECK_EQUAL((e >=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test298)  {  BOOST_CHECK_EQUAL((e <   b) , 0); }
    BOOST_AUTO_TEST_CASE(test299)  {  BOOST_CHECK_EQUAL((e <=  b) , 0); }
    BOOST_AUTO_TEST_CASE(test300)  {  BOOST_CHECK_EQUAL((e ==  aa), 0); }
    BOOST_AUTO_TEST_CASE(test301)  {  BOOST_CHECK_EQUAL((e !=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test302)  {  BOOST_CHECK_EQUAL((e >   aa), 1); }
    BOOST_AUTO_TEST_CASE(test303)  {  BOOST_CHECK_EQUAL((e >=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test304)  {  BOOST_CHECK_EQUAL((e <   aa), 0); }
    BOOST_AUTO_TEST_CASE(test305)  {  BOOST_CHECK_EQUAL((e <=  aa), 0); }
    BOOST_AUTO_TEST_CASE(test306)  {  BOOST_CHECK_EQUAL((e ==  bb), 0); }
    BOOST_AUTO_TEST_CASE(test307)  {  BOOST_CHECK_EQUAL((e !=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test308)  {  BOOST_CHECK_EQUAL((e >   bb), 1); }
    BOOST_AUTO_TEST_CASE(test309)  {  BOOST_CHECK_EQUAL((e >=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test310)  {  BOOST_CHECK_EQUAL((e <   bb), 0); }
    BOOST_AUTO_TEST_CASE(test311)  {  BOOST_CHECK_EQUAL((e <=  bb), 0); }
    BOOST_AUTO_TEST_CASE(test312)  {  BOOST_CHECK_EQUAL((e ==  c) , 0); }
    BOOST_AUTO_TEST_CASE(test313)  {  BOOST_CHECK_EQUAL((e !=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test314)  {  BOOST_CHECK_EQUAL((e >   c) , 1); }
    BOOST_AUTO_TEST_CASE(test315)  {  BOOST_CHECK_EQUAL((e >=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test316)  {  BOOST_CHECK_EQUAL((e <   c) , 0); }
    BOOST_AUTO_TEST_CASE(test317)  {  BOOST_CHECK_EQUAL((e <=  c) , 0); }
    BOOST_AUTO_TEST_CASE(test318)  {  BOOST_CHECK_EQUAL((e ==  d) , 0); }
    BOOST_AUTO_TEST_CASE(test319)  {  BOOST_CHECK_EQUAL((e !=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test320)  {  BOOST_CHECK_EQUAL((e >   d) , 1); }
    BOOST_AUTO_TEST_CASE(test321)  {  BOOST_CHECK_EQUAL((e >=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test322)  {  BOOST_CHECK_EQUAL((e <   d) , 0); }
    BOOST_AUTO_TEST_CASE(test323)  {  BOOST_CHECK_EQUAL((e <=  d) , 0); }
    BOOST_AUTO_TEST_CASE(test324)  {  BOOST_CHECK_EQUAL((e ==  e) , 1); }
    BOOST_AUTO_TEST_CASE(test325)  {  BOOST_CHECK_EQUAL((e !=  e) , 0); }
    BOOST_AUTO_TEST_CASE(test326)  {  BOOST_CHECK_EQUAL((e >   e) , 0); }
    BOOST_AUTO_TEST_CASE(test327)  {  BOOST_CHECK_EQUAL((e >=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test328)  {  BOOST_CHECK_EQUAL((e <   e) , 0); }
    BOOST_AUTO_TEST_CASE(test329)  {  BOOST_CHECK_EQUAL((e <=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test330)  {  BOOST_CHECK_EQUAL((e ==  f) , 0); }
    BOOST_AUTO_TEST_CASE(test331)  {  BOOST_CHECK_EQUAL((e !=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test332)  {  BOOST_CHECK_EQUAL((e >   f) , 1); }
    BOOST_AUTO_TEST_CASE(test333)  {  BOOST_CHECK_EQUAL((e >=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test334)  {  BOOST_CHECK_EQUAL((e <   f) , 0); }
    BOOST_AUTO_TEST_CASE(test335)  {  BOOST_CHECK_EQUAL((e <=  f) , 0); }
    BOOST_AUTO_TEST_CASE(test336)  {  BOOST_CHECK_EQUAL((f ==  a) , 1); }
    BOOST_AUTO_TEST_CASE(test337)  {  BOOST_CHECK_EQUAL((f !=  a) , 0); }
    BOOST_AUTO_TEST_CASE(test338)  {  BOOST_CHECK_EQUAL((f >   a) , 0); }
    BOOST_AUTO_TEST_CASE(test339)  {  BOOST_CHECK_EQUAL((f >=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test340)  {  BOOST_CHECK_EQUAL((f <   a) , 0); }
    BOOST_AUTO_TEST_CASE(test341)  {  BOOST_CHECK_EQUAL((f <=  a) , 1); }
    BOOST_AUTO_TEST_CASE(test342)  {  BOOST_CHECK_EQUAL((f ==  b) , 1); }
    BOOST_AUTO_TEST_CASE(test343)  {  BOOST_CHECK_EQUAL((f !=  b) , 0); }
    BOOST_AUTO_TEST_CASE(test344)  {  BOOST_CHECK_EQUAL((f >   b) , 0); }
    BOOST_AUTO_TEST_CASE(test345)  {  BOOST_CHECK_EQUAL((f >=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test346)  {  BOOST_CHECK_EQUAL((f <   b) , 0); }
    BOOST_AUTO_TEST_CASE(test347)  {  BOOST_CHECK_EQUAL((f <=  b) , 1); }
    BOOST_AUTO_TEST_CASE(test348)  {  BOOST_CHECK_EQUAL((f ==  aa), 0); }
    BOOST_AUTO_TEST_CASE(test349)  {  BOOST_CHECK_EQUAL((f !=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test350)  {  BOOST_CHECK_EQUAL((f >   aa), 0); }
    BOOST_AUTO_TEST_CASE(test351)  {  BOOST_CHECK_EQUAL((f >=  aa), 0); }
    BOOST_AUTO_TEST_CASE(test352)  {  BOOST_CHECK_EQUAL((f <   aa), 1); }
    BOOST_AUTO_TEST_CASE(test353)  {  BOOST_CHECK_EQUAL((f <=  aa), 1); }
    BOOST_AUTO_TEST_CASE(test354)  {  BOOST_CHECK_EQUAL((f ==  bb), 0); }
    BOOST_AUTO_TEST_CASE(test355)  {  BOOST_CHECK_EQUAL((f !=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test356)  {  BOOST_CHECK_EQUAL((f >   bb), 1); }
    BOOST_AUTO_TEST_CASE(test357)  {  BOOST_CHECK_EQUAL((f >=  bb), 1); }
    BOOST_AUTO_TEST_CASE(test358)  {  BOOST_CHECK_EQUAL((f <   bb), 0); }
    BOOST_AUTO_TEST_CASE(test359)  {  BOOST_CHECK_EQUAL((f <=  bb), 0); }
    BOOST_AUTO_TEST_CASE(test360)  {  BOOST_CHECK_EQUAL((f ==  c) , 0); }
    BOOST_AUTO_TEST_CASE(test361)  {  BOOST_CHECK_EQUAL((f !=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test362)  {  BOOST_CHECK_EQUAL((f >   c) , 0); }
    BOOST_AUTO_TEST_CASE(test363)  {  BOOST_CHECK_EQUAL((f >=  c) , 0); }
    BOOST_AUTO_TEST_CASE(test364)  {  BOOST_CHECK_EQUAL((f <   c) , 1); }
    BOOST_AUTO_TEST_CASE(test365)  {  BOOST_CHECK_EQUAL((f <=  c) , 1); }
    BOOST_AUTO_TEST_CASE(test366)  {  BOOST_CHECK_EQUAL((f ==  d) , 0); }
    BOOST_AUTO_TEST_CASE(test367)  {  BOOST_CHECK_EQUAL((f !=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test368)  {  BOOST_CHECK_EQUAL((f >   d) , 0); }
    BOOST_AUTO_TEST_CASE(test369)  {  BOOST_CHECK_EQUAL((f >=  d) , 0); }
    BOOST_AUTO_TEST_CASE(test370)  {  BOOST_CHECK_EQUAL((f <   d) , 1); }
    BOOST_AUTO_TEST_CASE(test371)  {  BOOST_CHECK_EQUAL((f <=  d) , 1); }
    BOOST_AUTO_TEST_CASE(test372)  {  BOOST_CHECK_EQUAL((f ==  e) , 0); }
    BOOST_AUTO_TEST_CASE(test373)  {  BOOST_CHECK_EQUAL((f !=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test374)  {  BOOST_CHECK_EQUAL((f >   e) , 0); }
    BOOST_AUTO_TEST_CASE(test375)  {  BOOST_CHECK_EQUAL((f >=  e) , 0); }
    BOOST_AUTO_TEST_CASE(test376)  {  BOOST_CHECK_EQUAL((f <   e) , 1); }
    BOOST_AUTO_TEST_CASE(test377)  {  BOOST_CHECK_EQUAL((f <=  e) , 1); }
    BOOST_AUTO_TEST_CASE(test378)  {  BOOST_CHECK_EQUAL((f ==  f) , 1); }
    BOOST_AUTO_TEST_CASE(test379)  {  BOOST_CHECK_EQUAL((f !=  f) , 0); }
    BOOST_AUTO_TEST_CASE(test380)  {  BOOST_CHECK_EQUAL((f >   f) , 0); }
    BOOST_AUTO_TEST_CASE(test381)  {  BOOST_CHECK_EQUAL((f >=  f) , 1); }
    BOOST_AUTO_TEST_CASE(test382)  {  BOOST_CHECK_EQUAL((f <   f) , 0); }
    BOOST_AUTO_TEST_CASE(test383)  {  BOOST_CHECK_EQUAL((f <=  f) , 1); }

BOOST_AUTO_TEST_SUITE_END()
