#include "build/temp/_test_triangle.c"
#include "triangle.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_triangle_Classify_7_4_3(void){

  int s1,s2,long1;

  Classify(7,4,3,&s1, &s2, &long1 );

  UnityAssertEqualNumber((UNITY_INT)((7)), (UNITY_INT)((long1)), (

 ((void *)0)

 ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);



}



void test_triangle_checkValid_expect_valid(void){

  char *result;

  result= checkValid(3,4,5);

  UnityAssertEqualString((const char*)(("valid")), (const char*)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(22));

}





void test_triangle_3_4_5_expect_rightangle(void)

{

  char *result;



  result=checkType(3,4,5);

  UnityAssertEqualString((const char*)(("right angle")), (const char*)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(31));

}

void test_triangle_5_7_8_expect_obtuse(void)

{

  char *result;



  result=checkType(5,7,8);

  UnityAssertEqualString((const char*)(("obtuse")), (const char*)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(38));

}

void test_triangle_6_6_10_expect_accute(void)

{

  char *result;



  result=checkType(6,6,10);

  UnityAssertEqualString((const char*)(("accute")), (const char*)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(45));

}
