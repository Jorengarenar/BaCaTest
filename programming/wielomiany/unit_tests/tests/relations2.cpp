#define BOOST_TEST_MODULE RelationsBig
#include "init_testing.hpp"

struct foo {
    POLYNOMIAL a;
    POLYNOMIAL b;
    POLYNOMIAL aa;
    POLYNOMIAL bb;
    POLYNOMIAL c;
    POLYNOMIAL d;
    POLYNOMIAL e;
    POLYNOMIAL f;

    foo() :
        aa(POLYNOMIAL(0, 1)),
        bb(POLYNOMIAL(0, -1)),
        c(POLYNOMIAL(1, 2, 10)),
        d(POLYNOMIAL(0, 10)),
        e(POLYNOMIAL(2, 500, 10, 50000))
    {}
};

BOOST_FIXTURE_TEST_CASE(test0,   foo)  {  BOOST_CHECK_EQUAL((a ==  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test1,   foo)  {  BOOST_CHECK_EQUAL((a !=  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test2,   foo)  {  BOOST_CHECK_EQUAL((a >   a) , 0); }
BOOST_FIXTURE_TEST_CASE(test3,   foo)  {  BOOST_CHECK_EQUAL((a >=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test4,   foo)  {  BOOST_CHECK_EQUAL((a <   a) , 0); }
BOOST_FIXTURE_TEST_CASE(test5,   foo)  {  BOOST_CHECK_EQUAL((a <=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test6,   foo)  {  BOOST_CHECK_EQUAL((a ==  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test7,   foo)  {  BOOST_CHECK_EQUAL((a !=  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test8,   foo)  {  BOOST_CHECK_EQUAL((a >   b) , 0); }
BOOST_FIXTURE_TEST_CASE(test9,   foo)  {  BOOST_CHECK_EQUAL((a >=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test10,  foo)  {  BOOST_CHECK_EQUAL((a <   b) , 0); }
BOOST_FIXTURE_TEST_CASE(test11,  foo)  {  BOOST_CHECK_EQUAL((a <=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test12,  foo)  {  BOOST_CHECK_EQUAL((a ==  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test13,  foo)  {  BOOST_CHECK_EQUAL((a !=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test14,  foo)  {  BOOST_CHECK_EQUAL((a >   aa), 0); }
BOOST_FIXTURE_TEST_CASE(test15,  foo)  {  BOOST_CHECK_EQUAL((a >=  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test16,  foo)  {  BOOST_CHECK_EQUAL((a <   aa), 1); }
BOOST_FIXTURE_TEST_CASE(test17,  foo)  {  BOOST_CHECK_EQUAL((a <=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test18,  foo)  {  BOOST_CHECK_EQUAL((a ==  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test19,  foo)  {  BOOST_CHECK_EQUAL((a !=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test20,  foo)  {  BOOST_CHECK_EQUAL((a >   bb), 1); }
BOOST_FIXTURE_TEST_CASE(test21,  foo)  {  BOOST_CHECK_EQUAL((a >=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test22,  foo)  {  BOOST_CHECK_EQUAL((a <   bb), 0); }
BOOST_FIXTURE_TEST_CASE(test23,  foo)  {  BOOST_CHECK_EQUAL((a <=  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test24,  foo)  {  BOOST_CHECK_EQUAL((a ==  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test25,  foo)  {  BOOST_CHECK_EQUAL((a !=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test26,  foo)  {  BOOST_CHECK_EQUAL((a >   c) , 0); }
BOOST_FIXTURE_TEST_CASE(test27,  foo)  {  BOOST_CHECK_EQUAL((a >=  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test28,  foo)  {  BOOST_CHECK_EQUAL((a <   c) , 1); }
BOOST_FIXTURE_TEST_CASE(test29,  foo)  {  BOOST_CHECK_EQUAL((a <=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test30,  foo)  {  BOOST_CHECK_EQUAL((a ==  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test31,  foo)  {  BOOST_CHECK_EQUAL((a !=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test32,  foo)  {  BOOST_CHECK_EQUAL((a >   d) , 0); }
BOOST_FIXTURE_TEST_CASE(test33,  foo)  {  BOOST_CHECK_EQUAL((a >=  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test34,  foo)  {  BOOST_CHECK_EQUAL((a <   d) , 1); }
BOOST_FIXTURE_TEST_CASE(test35,  foo)  {  BOOST_CHECK_EQUAL((a <=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test36,  foo)  {  BOOST_CHECK_EQUAL((a ==  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test37,  foo)  {  BOOST_CHECK_EQUAL((a !=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test38,  foo)  {  BOOST_CHECK_EQUAL((a >   e) , 0); }
BOOST_FIXTURE_TEST_CASE(test39,  foo)  {  BOOST_CHECK_EQUAL((a >=  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test40,  foo)  {  BOOST_CHECK_EQUAL((a <   e) , 1); }
BOOST_FIXTURE_TEST_CASE(test41,  foo)  {  BOOST_CHECK_EQUAL((a <=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test42,  foo)  {  BOOST_CHECK_EQUAL((a ==  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test43,  foo)  {  BOOST_CHECK_EQUAL((a !=  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test44,  foo)  {  BOOST_CHECK_EQUAL((a >   f) , 0); }
BOOST_FIXTURE_TEST_CASE(test45,  foo)  {  BOOST_CHECK_EQUAL((a >=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test46,  foo)  {  BOOST_CHECK_EQUAL((a <   f) , 0); }
BOOST_FIXTURE_TEST_CASE(test47,  foo)  {  BOOST_CHECK_EQUAL((a <=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test48,  foo)  {  BOOST_CHECK_EQUAL((b ==  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test49,  foo)  {  BOOST_CHECK_EQUAL((b !=  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test50,  foo)  {  BOOST_CHECK_EQUAL((b >   a) , 0); }
BOOST_FIXTURE_TEST_CASE(test51,  foo)  {  BOOST_CHECK_EQUAL((b >=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test52,  foo)  {  BOOST_CHECK_EQUAL((b <   a) , 0); }
BOOST_FIXTURE_TEST_CASE(test53,  foo)  {  BOOST_CHECK_EQUAL((b <=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test54,  foo)  {  BOOST_CHECK_EQUAL((b ==  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test55,  foo)  {  BOOST_CHECK_EQUAL((b !=  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test56,  foo)  {  BOOST_CHECK_EQUAL((b >   b) , 0); }
BOOST_FIXTURE_TEST_CASE(test57,  foo)  {  BOOST_CHECK_EQUAL((b >=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test58,  foo)  {  BOOST_CHECK_EQUAL((b <   b) , 0); }
BOOST_FIXTURE_TEST_CASE(test59,  foo)  {  BOOST_CHECK_EQUAL((b <=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test60,  foo)  {  BOOST_CHECK_EQUAL((b ==  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test61,  foo)  {  BOOST_CHECK_EQUAL((b !=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test62,  foo)  {  BOOST_CHECK_EQUAL((b >   aa), 0); }
BOOST_FIXTURE_TEST_CASE(test63,  foo)  {  BOOST_CHECK_EQUAL((b >=  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test64,  foo)  {  BOOST_CHECK_EQUAL((b <   aa), 1); }
BOOST_FIXTURE_TEST_CASE(test65,  foo)  {  BOOST_CHECK_EQUAL((b <=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test66,  foo)  {  BOOST_CHECK_EQUAL((b ==  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test67,  foo)  {  BOOST_CHECK_EQUAL((b !=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test68,  foo)  {  BOOST_CHECK_EQUAL((b >   bb), 1); }
BOOST_FIXTURE_TEST_CASE(test69,  foo)  {  BOOST_CHECK_EQUAL((b >=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test70,  foo)  {  BOOST_CHECK_EQUAL((b <   bb), 0); }
BOOST_FIXTURE_TEST_CASE(test71,  foo)  {  BOOST_CHECK_EQUAL((b <=  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test72,  foo)  {  BOOST_CHECK_EQUAL((b ==  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test73,  foo)  {  BOOST_CHECK_EQUAL((b !=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test74,  foo)  {  BOOST_CHECK_EQUAL((b >   c) , 0); }
BOOST_FIXTURE_TEST_CASE(test75,  foo)  {  BOOST_CHECK_EQUAL((b >=  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test76,  foo)  {  BOOST_CHECK_EQUAL((b <   c) , 1); }
BOOST_FIXTURE_TEST_CASE(test77,  foo)  {  BOOST_CHECK_EQUAL((b <=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test78,  foo)  {  BOOST_CHECK_EQUAL((b ==  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test79,  foo)  {  BOOST_CHECK_EQUAL((b !=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test80,  foo)  {  BOOST_CHECK_EQUAL((b >   d) , 0); }
BOOST_FIXTURE_TEST_CASE(test81,  foo)  {  BOOST_CHECK_EQUAL((b >=  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test82,  foo)  {  BOOST_CHECK_EQUAL((b <   d) , 1); }
BOOST_FIXTURE_TEST_CASE(test83,  foo)  {  BOOST_CHECK_EQUAL((b <=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test84,  foo)  {  BOOST_CHECK_EQUAL((b ==  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test85,  foo)  {  BOOST_CHECK_EQUAL((b !=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test86,  foo)  {  BOOST_CHECK_EQUAL((b >   e) , 0); }
BOOST_FIXTURE_TEST_CASE(test87,  foo)  {  BOOST_CHECK_EQUAL((b >=  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test88,  foo)  {  BOOST_CHECK_EQUAL((b <   e) , 1); }
BOOST_FIXTURE_TEST_CASE(test89,  foo)  {  BOOST_CHECK_EQUAL((b <=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test90,  foo)  {  BOOST_CHECK_EQUAL((b ==  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test91,  foo)  {  BOOST_CHECK_EQUAL((b !=  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test92,  foo)  {  BOOST_CHECK_EQUAL((b >   f) , 0); }
BOOST_FIXTURE_TEST_CASE(test93,  foo)  {  BOOST_CHECK_EQUAL((b >=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test94,  foo)  {  BOOST_CHECK_EQUAL((b <   f) , 0); }
BOOST_FIXTURE_TEST_CASE(test95,  foo)  {  BOOST_CHECK_EQUAL((b <=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test96,  foo)  {  BOOST_CHECK_EQUAL((aa==  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test97,  foo)  {  BOOST_CHECK_EQUAL((aa!=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test98,  foo)  {  BOOST_CHECK_EQUAL((aa>   a) , 1); }
BOOST_FIXTURE_TEST_CASE(test99,  foo)  {  BOOST_CHECK_EQUAL((aa>=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test100, foo)  {  BOOST_CHECK_EQUAL((aa<   a) , 0); }
BOOST_FIXTURE_TEST_CASE(test101, foo)  {  BOOST_CHECK_EQUAL((aa<=  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test102, foo)  {  BOOST_CHECK_EQUAL((aa==  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test103, foo)  {  BOOST_CHECK_EQUAL((aa!=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test104, foo)  {  BOOST_CHECK_EQUAL((aa>   b) , 1); }
BOOST_FIXTURE_TEST_CASE(test105, foo)  {  BOOST_CHECK_EQUAL((aa>=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test106, foo)  {  BOOST_CHECK_EQUAL((aa<   b) , 0); }
BOOST_FIXTURE_TEST_CASE(test107, foo)  {  BOOST_CHECK_EQUAL((aa<=  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test108, foo)  {  BOOST_CHECK_EQUAL((aa==  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test109, foo)  {  BOOST_CHECK_EQUAL((aa!=  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test110, foo)  {  BOOST_CHECK_EQUAL((aa>   aa), 0); }
BOOST_FIXTURE_TEST_CASE(test111, foo)  {  BOOST_CHECK_EQUAL((aa>=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test112, foo)  {  BOOST_CHECK_EQUAL((aa<   aa), 0); }
BOOST_FIXTURE_TEST_CASE(test113, foo)  {  BOOST_CHECK_EQUAL((aa<=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test114, foo)  {  BOOST_CHECK_EQUAL((aa==  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test115, foo)  {  BOOST_CHECK_EQUAL((aa!=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test116, foo)  {  BOOST_CHECK_EQUAL((aa>   bb), 1); }
BOOST_FIXTURE_TEST_CASE(test117, foo)  {  BOOST_CHECK_EQUAL((aa>=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test118, foo)  {  BOOST_CHECK_EQUAL((aa<   bb), 0); }
BOOST_FIXTURE_TEST_CASE(test119, foo)  {  BOOST_CHECK_EQUAL((aa<=  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test120, foo)  {  BOOST_CHECK_EQUAL((aa==  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test121, foo)  {  BOOST_CHECK_EQUAL((aa!=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test122, foo)  {  BOOST_CHECK_EQUAL((aa>   c) , 0); }
BOOST_FIXTURE_TEST_CASE(test123, foo)  {  BOOST_CHECK_EQUAL((aa>=  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test124, foo)  {  BOOST_CHECK_EQUAL((aa<   c) , 1); }
BOOST_FIXTURE_TEST_CASE(test125, foo)  {  BOOST_CHECK_EQUAL((aa<=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test126, foo)  {  BOOST_CHECK_EQUAL((aa==  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test127, foo)  {  BOOST_CHECK_EQUAL((aa!=  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test128, foo)  {  BOOST_CHECK_EQUAL((aa>   d) , 0); }
BOOST_FIXTURE_TEST_CASE(test129, foo)  {  BOOST_CHECK_EQUAL((aa>=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test130, foo)  {  BOOST_CHECK_EQUAL((aa<   d) , 0); }
BOOST_FIXTURE_TEST_CASE(test131, foo)  {  BOOST_CHECK_EQUAL((aa<=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test132, foo)  {  BOOST_CHECK_EQUAL((aa==  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test133, foo)  {  BOOST_CHECK_EQUAL((aa!=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test134, foo)  {  BOOST_CHECK_EQUAL((aa>   e) , 0); }
BOOST_FIXTURE_TEST_CASE(test135, foo)  {  BOOST_CHECK_EQUAL((aa>=  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test136, foo)  {  BOOST_CHECK_EQUAL((aa<   e) , 1); }
BOOST_FIXTURE_TEST_CASE(test137, foo)  {  BOOST_CHECK_EQUAL((aa<=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test138, foo)  {  BOOST_CHECK_EQUAL((aa==  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test139, foo)  {  BOOST_CHECK_EQUAL((aa!=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test140, foo)  {  BOOST_CHECK_EQUAL((aa>   f) , 1); }
BOOST_FIXTURE_TEST_CASE(test141, foo)  {  BOOST_CHECK_EQUAL((aa>=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test142, foo)  {  BOOST_CHECK_EQUAL((aa<   f) , 0); }
BOOST_FIXTURE_TEST_CASE(test143, foo)  {  BOOST_CHECK_EQUAL((aa<=  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test144, foo)  {  BOOST_CHECK_EQUAL((bb==  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test145, foo)  {  BOOST_CHECK_EQUAL((bb!=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test146, foo)  {  BOOST_CHECK_EQUAL((bb>   a) , 0); }
BOOST_FIXTURE_TEST_CASE(test147, foo)  {  BOOST_CHECK_EQUAL((bb>=  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test148, foo)  {  BOOST_CHECK_EQUAL((bb<   a) , 1); }
BOOST_FIXTURE_TEST_CASE(test149, foo)  {  BOOST_CHECK_EQUAL((bb<=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test150, foo)  {  BOOST_CHECK_EQUAL((bb==  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test151, foo)  {  BOOST_CHECK_EQUAL((bb!=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test152, foo)  {  BOOST_CHECK_EQUAL((bb>   b) , 0); }
BOOST_FIXTURE_TEST_CASE(test153, foo)  {  BOOST_CHECK_EQUAL((bb>=  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test154, foo)  {  BOOST_CHECK_EQUAL((bb<   b) , 1); }
BOOST_FIXTURE_TEST_CASE(test155, foo)  {  BOOST_CHECK_EQUAL((bb<=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test156, foo)  {  BOOST_CHECK_EQUAL((bb==  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test157, foo)  {  BOOST_CHECK_EQUAL((bb!=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test158, foo)  {  BOOST_CHECK_EQUAL((bb>   aa), 0); }
BOOST_FIXTURE_TEST_CASE(test159, foo)  {  BOOST_CHECK_EQUAL((bb>=  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test160, foo)  {  BOOST_CHECK_EQUAL((bb<   aa), 1); }
BOOST_FIXTURE_TEST_CASE(test161, foo)  {  BOOST_CHECK_EQUAL((bb<=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test162, foo)  {  BOOST_CHECK_EQUAL((bb==  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test163, foo)  {  BOOST_CHECK_EQUAL((bb!=  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test164, foo)  {  BOOST_CHECK_EQUAL((bb>   bb), 0); }
BOOST_FIXTURE_TEST_CASE(test165, foo)  {  BOOST_CHECK_EQUAL((bb>=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test166, foo)  {  BOOST_CHECK_EQUAL((bb<   bb), 0); }
BOOST_FIXTURE_TEST_CASE(test167, foo)  {  BOOST_CHECK_EQUAL((bb<=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test168, foo)  {  BOOST_CHECK_EQUAL((bb==  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test169, foo)  {  BOOST_CHECK_EQUAL((bb!=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test170, foo)  {  BOOST_CHECK_EQUAL((bb>   c) , 0); }
BOOST_FIXTURE_TEST_CASE(test171, foo)  {  BOOST_CHECK_EQUAL((bb>=  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test172, foo)  {  BOOST_CHECK_EQUAL((bb<   c) , 1); }
BOOST_FIXTURE_TEST_CASE(test173, foo)  {  BOOST_CHECK_EQUAL((bb<=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test174, foo)  {  BOOST_CHECK_EQUAL((bb==  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test175, foo)  {  BOOST_CHECK_EQUAL((bb!=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test176, foo)  {  BOOST_CHECK_EQUAL((bb>   d) , 0); }
BOOST_FIXTURE_TEST_CASE(test177, foo)  {  BOOST_CHECK_EQUAL((bb>=  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test178, foo)  {  BOOST_CHECK_EQUAL((bb<   d) , 1); }
BOOST_FIXTURE_TEST_CASE(test179, foo)  {  BOOST_CHECK_EQUAL((bb<=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test180, foo)  {  BOOST_CHECK_EQUAL((bb==  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test181, foo)  {  BOOST_CHECK_EQUAL((bb!=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test182, foo)  {  BOOST_CHECK_EQUAL((bb>   e) , 0); }
BOOST_FIXTURE_TEST_CASE(test183, foo)  {  BOOST_CHECK_EQUAL((bb>=  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test184, foo)  {  BOOST_CHECK_EQUAL((bb<   e) , 1); }
BOOST_FIXTURE_TEST_CASE(test185, foo)  {  BOOST_CHECK_EQUAL((bb<=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test186, foo)  {  BOOST_CHECK_EQUAL((bb==  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test187, foo)  {  BOOST_CHECK_EQUAL((bb!=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test188, foo)  {  BOOST_CHECK_EQUAL((bb>   f) , 0); }
BOOST_FIXTURE_TEST_CASE(test189, foo)  {  BOOST_CHECK_EQUAL((bb>=  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test190, foo)  {  BOOST_CHECK_EQUAL((bb<   f) , 1); }
BOOST_FIXTURE_TEST_CASE(test191, foo)  {  BOOST_CHECK_EQUAL((bb<=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test192, foo)  {  BOOST_CHECK_EQUAL((c ==  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test193, foo)  {  BOOST_CHECK_EQUAL((c !=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test194, foo)  {  BOOST_CHECK_EQUAL((c >   a) , 1); }
BOOST_FIXTURE_TEST_CASE(test195, foo)  {  BOOST_CHECK_EQUAL((c >=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test196, foo)  {  BOOST_CHECK_EQUAL((c <   a) , 0); }
BOOST_FIXTURE_TEST_CASE(test197, foo)  {  BOOST_CHECK_EQUAL((c <=  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test198, foo)  {  BOOST_CHECK_EQUAL((c ==  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test199, foo)  {  BOOST_CHECK_EQUAL((c !=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test200, foo)  {  BOOST_CHECK_EQUAL((c >   b) , 1); }
BOOST_FIXTURE_TEST_CASE(test201, foo)  {  BOOST_CHECK_EQUAL((c >=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test202, foo)  {  BOOST_CHECK_EQUAL((c <   b) , 0); }
BOOST_FIXTURE_TEST_CASE(test203, foo)  {  BOOST_CHECK_EQUAL((c <=  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test204, foo)  {  BOOST_CHECK_EQUAL((c ==  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test205, foo)  {  BOOST_CHECK_EQUAL((c !=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test206, foo)  {  BOOST_CHECK_EQUAL((c >   aa), 1); }
BOOST_FIXTURE_TEST_CASE(test207, foo)  {  BOOST_CHECK_EQUAL((c >=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test208, foo)  {  BOOST_CHECK_EQUAL((c <   aa), 0); }
BOOST_FIXTURE_TEST_CASE(test209, foo)  {  BOOST_CHECK_EQUAL((c <=  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test210, foo)  {  BOOST_CHECK_EQUAL((c ==  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test211, foo)  {  BOOST_CHECK_EQUAL((c !=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test212, foo)  {  BOOST_CHECK_EQUAL((c >   bb), 1); }
BOOST_FIXTURE_TEST_CASE(test213, foo)  {  BOOST_CHECK_EQUAL((c >=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test214, foo)  {  BOOST_CHECK_EQUAL((c <   bb), 0); }
BOOST_FIXTURE_TEST_CASE(test215, foo)  {  BOOST_CHECK_EQUAL((c <=  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test216, foo)  {  BOOST_CHECK_EQUAL((c ==  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test217, foo)  {  BOOST_CHECK_EQUAL((c !=  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test218, foo)  {  BOOST_CHECK_EQUAL((c >   c) , 0); }
BOOST_FIXTURE_TEST_CASE(test219, foo)  {  BOOST_CHECK_EQUAL((c >=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test220, foo)  {  BOOST_CHECK_EQUAL((c <   c) , 0); }
BOOST_FIXTURE_TEST_CASE(test221, foo)  {  BOOST_CHECK_EQUAL((c <=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test222, foo)  {  BOOST_CHECK_EQUAL((c ==  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test223, foo)  {  BOOST_CHECK_EQUAL((c !=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test224, foo)  {  BOOST_CHECK_EQUAL((c >   d) , 1); }
BOOST_FIXTURE_TEST_CASE(test225, foo)  {  BOOST_CHECK_EQUAL((c >=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test226, foo)  {  BOOST_CHECK_EQUAL((c <   d) , 0); }
BOOST_FIXTURE_TEST_CASE(test227, foo)  {  BOOST_CHECK_EQUAL((c <=  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test228, foo)  {  BOOST_CHECK_EQUAL((c ==  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test229, foo)  {  BOOST_CHECK_EQUAL((c !=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test230, foo)  {  BOOST_CHECK_EQUAL((c >   e) , 0); }
BOOST_FIXTURE_TEST_CASE(test231, foo)  {  BOOST_CHECK_EQUAL((c >=  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test232, foo)  {  BOOST_CHECK_EQUAL((c <   e) , 1); }
BOOST_FIXTURE_TEST_CASE(test233, foo)  {  BOOST_CHECK_EQUAL((c <=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test234, foo)  {  BOOST_CHECK_EQUAL((c ==  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test235, foo)  {  BOOST_CHECK_EQUAL((c !=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test236, foo)  {  BOOST_CHECK_EQUAL((c >   f) , 1); }
BOOST_FIXTURE_TEST_CASE(test237, foo)  {  BOOST_CHECK_EQUAL((c >=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test238, foo)  {  BOOST_CHECK_EQUAL((c <   f) , 0); }
BOOST_FIXTURE_TEST_CASE(test239, foo)  {  BOOST_CHECK_EQUAL((c <=  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test240, foo)  {  BOOST_CHECK_EQUAL((d ==  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test241, foo)  {  BOOST_CHECK_EQUAL((d !=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test242, foo)  {  BOOST_CHECK_EQUAL((d >   a) , 1); }
BOOST_FIXTURE_TEST_CASE(test243, foo)  {  BOOST_CHECK_EQUAL((d >=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test244, foo)  {  BOOST_CHECK_EQUAL((d <   a) , 0); }
BOOST_FIXTURE_TEST_CASE(test245, foo)  {  BOOST_CHECK_EQUAL((d <=  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test246, foo)  {  BOOST_CHECK_EQUAL((d ==  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test247, foo)  {  BOOST_CHECK_EQUAL((d !=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test248, foo)  {  BOOST_CHECK_EQUAL((d >   b) , 1); }
BOOST_FIXTURE_TEST_CASE(test249, foo)  {  BOOST_CHECK_EQUAL((d >=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test250, foo)  {  BOOST_CHECK_EQUAL((d <   b) , 0); }
BOOST_FIXTURE_TEST_CASE(test251, foo)  {  BOOST_CHECK_EQUAL((d <=  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test252, foo)  {  BOOST_CHECK_EQUAL((d ==  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test253, foo)  {  BOOST_CHECK_EQUAL((d !=  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test254, foo)  {  BOOST_CHECK_EQUAL((d >   aa), 0); }
BOOST_FIXTURE_TEST_CASE(test255, foo)  {  BOOST_CHECK_EQUAL((d >=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test256, foo)  {  BOOST_CHECK_EQUAL((d <   aa), 0); }
BOOST_FIXTURE_TEST_CASE(test257, foo)  {  BOOST_CHECK_EQUAL((d <=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test258, foo)  {  BOOST_CHECK_EQUAL((d ==  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test259, foo)  {  BOOST_CHECK_EQUAL((d !=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test260, foo)  {  BOOST_CHECK_EQUAL((d >   bb), 1); }
BOOST_FIXTURE_TEST_CASE(test261, foo)  {  BOOST_CHECK_EQUAL((d >=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test262, foo)  {  BOOST_CHECK_EQUAL((d <   bb), 0); }
BOOST_FIXTURE_TEST_CASE(test263, foo)  {  BOOST_CHECK_EQUAL((d <=  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test264, foo)  {  BOOST_CHECK_EQUAL((d ==  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test265, foo)  {  BOOST_CHECK_EQUAL((d !=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test266, foo)  {  BOOST_CHECK_EQUAL((d >   c) , 0); }
BOOST_FIXTURE_TEST_CASE(test267, foo)  {  BOOST_CHECK_EQUAL((d >=  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test268, foo)  {  BOOST_CHECK_EQUAL((d <   c) , 1); }
BOOST_FIXTURE_TEST_CASE(test269, foo)  {  BOOST_CHECK_EQUAL((d <=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test270, foo)  {  BOOST_CHECK_EQUAL((d ==  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test271, foo)  {  BOOST_CHECK_EQUAL((d !=  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test272, foo)  {  BOOST_CHECK_EQUAL((d >   d) , 0); }
BOOST_FIXTURE_TEST_CASE(test273, foo)  {  BOOST_CHECK_EQUAL((d >=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test274, foo)  {  BOOST_CHECK_EQUAL((d <   d) , 0); }
BOOST_FIXTURE_TEST_CASE(test275, foo)  {  BOOST_CHECK_EQUAL((d <=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test276, foo)  {  BOOST_CHECK_EQUAL((d ==  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test277, foo)  {  BOOST_CHECK_EQUAL((d !=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test278, foo)  {  BOOST_CHECK_EQUAL((d >   e) , 0); }
BOOST_FIXTURE_TEST_CASE(test279, foo)  {  BOOST_CHECK_EQUAL((d >=  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test280, foo)  {  BOOST_CHECK_EQUAL((d <   e) , 1); }
BOOST_FIXTURE_TEST_CASE(test281, foo)  {  BOOST_CHECK_EQUAL((d <=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test282, foo)  {  BOOST_CHECK_EQUAL((d ==  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test283, foo)  {  BOOST_CHECK_EQUAL((d !=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test284, foo)  {  BOOST_CHECK_EQUAL((d >   f) , 1); }
BOOST_FIXTURE_TEST_CASE(test285, foo)  {  BOOST_CHECK_EQUAL((d >=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test286, foo)  {  BOOST_CHECK_EQUAL((d <   f) , 0); }
BOOST_FIXTURE_TEST_CASE(test287, foo)  {  BOOST_CHECK_EQUAL((d <=  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test288, foo)  {  BOOST_CHECK_EQUAL((e ==  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test289, foo)  {  BOOST_CHECK_EQUAL((e !=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test290, foo)  {  BOOST_CHECK_EQUAL((e >   a) , 1); }
BOOST_FIXTURE_TEST_CASE(test291, foo)  {  BOOST_CHECK_EQUAL((e >=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test292, foo)  {  BOOST_CHECK_EQUAL((e <   a) , 0); }
BOOST_FIXTURE_TEST_CASE(test293, foo)  {  BOOST_CHECK_EQUAL((e <=  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test294, foo)  {  BOOST_CHECK_EQUAL((e ==  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test295, foo)  {  BOOST_CHECK_EQUAL((e !=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test296, foo)  {  BOOST_CHECK_EQUAL((e >   b) , 1); }
BOOST_FIXTURE_TEST_CASE(test297, foo)  {  BOOST_CHECK_EQUAL((e >=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test298, foo)  {  BOOST_CHECK_EQUAL((e <   b) , 0); }
BOOST_FIXTURE_TEST_CASE(test299, foo)  {  BOOST_CHECK_EQUAL((e <=  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test300, foo)  {  BOOST_CHECK_EQUAL((e ==  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test301, foo)  {  BOOST_CHECK_EQUAL((e !=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test302, foo)  {  BOOST_CHECK_EQUAL((e >   aa), 1); }
BOOST_FIXTURE_TEST_CASE(test303, foo)  {  BOOST_CHECK_EQUAL((e >=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test304, foo)  {  BOOST_CHECK_EQUAL((e <   aa), 0); }
BOOST_FIXTURE_TEST_CASE(test305, foo)  {  BOOST_CHECK_EQUAL((e <=  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test306, foo)  {  BOOST_CHECK_EQUAL((e ==  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test307, foo)  {  BOOST_CHECK_EQUAL((e !=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test308, foo)  {  BOOST_CHECK_EQUAL((e >   bb), 1); }
BOOST_FIXTURE_TEST_CASE(test309, foo)  {  BOOST_CHECK_EQUAL((e >=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test310, foo)  {  BOOST_CHECK_EQUAL((e <   bb), 0); }
BOOST_FIXTURE_TEST_CASE(test311, foo)  {  BOOST_CHECK_EQUAL((e <=  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test312, foo)  {  BOOST_CHECK_EQUAL((e ==  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test313, foo)  {  BOOST_CHECK_EQUAL((e !=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test314, foo)  {  BOOST_CHECK_EQUAL((e >   c) , 1); }
BOOST_FIXTURE_TEST_CASE(test315, foo)  {  BOOST_CHECK_EQUAL((e >=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test316, foo)  {  BOOST_CHECK_EQUAL((e <   c) , 0); }
BOOST_FIXTURE_TEST_CASE(test317, foo)  {  BOOST_CHECK_EQUAL((e <=  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test318, foo)  {  BOOST_CHECK_EQUAL((e ==  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test319, foo)  {  BOOST_CHECK_EQUAL((e !=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test320, foo)  {  BOOST_CHECK_EQUAL((e >   d) , 1); }
BOOST_FIXTURE_TEST_CASE(test321, foo)  {  BOOST_CHECK_EQUAL((e >=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test322, foo)  {  BOOST_CHECK_EQUAL((e <   d) , 0); }
BOOST_FIXTURE_TEST_CASE(test323, foo)  {  BOOST_CHECK_EQUAL((e <=  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test324, foo)  {  BOOST_CHECK_EQUAL((e ==  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test325, foo)  {  BOOST_CHECK_EQUAL((e !=  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test326, foo)  {  BOOST_CHECK_EQUAL((e >   e) , 0); }
BOOST_FIXTURE_TEST_CASE(test327, foo)  {  BOOST_CHECK_EQUAL((e >=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test328, foo)  {  BOOST_CHECK_EQUAL((e <   e) , 0); }
BOOST_FIXTURE_TEST_CASE(test329, foo)  {  BOOST_CHECK_EQUAL((e <=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test330, foo)  {  BOOST_CHECK_EQUAL((e ==  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test331, foo)  {  BOOST_CHECK_EQUAL((e !=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test332, foo)  {  BOOST_CHECK_EQUAL((e >   f) , 1); }
BOOST_FIXTURE_TEST_CASE(test333, foo)  {  BOOST_CHECK_EQUAL((e >=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test334, foo)  {  BOOST_CHECK_EQUAL((e <   f) , 0); }
BOOST_FIXTURE_TEST_CASE(test335, foo)  {  BOOST_CHECK_EQUAL((e <=  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test336, foo)  {  BOOST_CHECK_EQUAL((f ==  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test337, foo)  {  BOOST_CHECK_EQUAL((f !=  a) , 0); }
BOOST_FIXTURE_TEST_CASE(test338, foo)  {  BOOST_CHECK_EQUAL((f >   a) , 0); }
BOOST_FIXTURE_TEST_CASE(test339, foo)  {  BOOST_CHECK_EQUAL((f >=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test340, foo)  {  BOOST_CHECK_EQUAL((f <   a) , 0); }
BOOST_FIXTURE_TEST_CASE(test341, foo)  {  BOOST_CHECK_EQUAL((f <=  a) , 1); }
BOOST_FIXTURE_TEST_CASE(test342, foo)  {  BOOST_CHECK_EQUAL((f ==  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test343, foo)  {  BOOST_CHECK_EQUAL((f !=  b) , 0); }
BOOST_FIXTURE_TEST_CASE(test344, foo)  {  BOOST_CHECK_EQUAL((f >   b) , 0); }
BOOST_FIXTURE_TEST_CASE(test345, foo)  {  BOOST_CHECK_EQUAL((f >=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test346, foo)  {  BOOST_CHECK_EQUAL((f <   b) , 0); }
BOOST_FIXTURE_TEST_CASE(test347, foo)  {  BOOST_CHECK_EQUAL((f <=  b) , 1); }
BOOST_FIXTURE_TEST_CASE(test348, foo)  {  BOOST_CHECK_EQUAL((f ==  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test349, foo)  {  BOOST_CHECK_EQUAL((f !=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test350, foo)  {  BOOST_CHECK_EQUAL((f >   aa), 0); }
BOOST_FIXTURE_TEST_CASE(test351, foo)  {  BOOST_CHECK_EQUAL((f >=  aa), 0); }
BOOST_FIXTURE_TEST_CASE(test352, foo)  {  BOOST_CHECK_EQUAL((f <   aa), 1); }
BOOST_FIXTURE_TEST_CASE(test353, foo)  {  BOOST_CHECK_EQUAL((f <=  aa), 1); }
BOOST_FIXTURE_TEST_CASE(test354, foo)  {  BOOST_CHECK_EQUAL((f ==  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test355, foo)  {  BOOST_CHECK_EQUAL((f !=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test356, foo)  {  BOOST_CHECK_EQUAL((f >   bb), 1); }
BOOST_FIXTURE_TEST_CASE(test357, foo)  {  BOOST_CHECK_EQUAL((f >=  bb), 1); }
BOOST_FIXTURE_TEST_CASE(test358, foo)  {  BOOST_CHECK_EQUAL((f <   bb), 0); }
BOOST_FIXTURE_TEST_CASE(test359, foo)  {  BOOST_CHECK_EQUAL((f <=  bb), 0); }
BOOST_FIXTURE_TEST_CASE(test360, foo)  {  BOOST_CHECK_EQUAL((f ==  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test361, foo)  {  BOOST_CHECK_EQUAL((f !=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test362, foo)  {  BOOST_CHECK_EQUAL((f >   c) , 0); }
BOOST_FIXTURE_TEST_CASE(test363, foo)  {  BOOST_CHECK_EQUAL((f >=  c) , 0); }
BOOST_FIXTURE_TEST_CASE(test364, foo)  {  BOOST_CHECK_EQUAL((f <   c) , 1); }
BOOST_FIXTURE_TEST_CASE(test365, foo)  {  BOOST_CHECK_EQUAL((f <=  c) , 1); }
BOOST_FIXTURE_TEST_CASE(test366, foo)  {  BOOST_CHECK_EQUAL((f ==  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test367, foo)  {  BOOST_CHECK_EQUAL((f !=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test368, foo)  {  BOOST_CHECK_EQUAL((f >   d) , 0); }
BOOST_FIXTURE_TEST_CASE(test369, foo)  {  BOOST_CHECK_EQUAL((f >=  d) , 0); }
BOOST_FIXTURE_TEST_CASE(test370, foo)  {  BOOST_CHECK_EQUAL((f <   d) , 1); }
BOOST_FIXTURE_TEST_CASE(test371, foo)  {  BOOST_CHECK_EQUAL((f <=  d) , 1); }
BOOST_FIXTURE_TEST_CASE(test372, foo)  {  BOOST_CHECK_EQUAL((f ==  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test373, foo)  {  BOOST_CHECK_EQUAL((f !=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test374, foo)  {  BOOST_CHECK_EQUAL((f >   e) , 0); }
BOOST_FIXTURE_TEST_CASE(test375, foo)  {  BOOST_CHECK_EQUAL((f >=  e) , 0); }
BOOST_FIXTURE_TEST_CASE(test376, foo)  {  BOOST_CHECK_EQUAL((f <   e) , 1); }
BOOST_FIXTURE_TEST_CASE(test377, foo)  {  BOOST_CHECK_EQUAL((f <=  e) , 1); }
BOOST_FIXTURE_TEST_CASE(test378, foo)  {  BOOST_CHECK_EQUAL((f ==  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test379, foo)  {  BOOST_CHECK_EQUAL((f !=  f) , 0); }
BOOST_FIXTURE_TEST_CASE(test380, foo)  {  BOOST_CHECK_EQUAL((f >   f) , 0); }
BOOST_FIXTURE_TEST_CASE(test381, foo)  {  BOOST_CHECK_EQUAL((f >=  f) , 1); }
BOOST_FIXTURE_TEST_CASE(test382, foo)  {  BOOST_CHECK_EQUAL((f <   f) , 0); }
BOOST_FIXTURE_TEST_CASE(test383, foo)  {  BOOST_CHECK_EQUAL((f <=  f) , 1); }
