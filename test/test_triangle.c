#include "unity.h"
#include "triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_triangle_Classify_7_4_3(void){
  int s1,s2,long1;
  Classify(7,4,3,&s1, &s2, &long1 );
  TEST_ASSERT_EQUAL(7,long1);
  
}

void test_triangle_checkValid_expect_valid(void){
  char *result;
  result= checkValid(3,4,5);
  TEST_ASSERT_EQUAL_STRING("valid",result);
}


void test_triangle_3_4_5_expect_rightangle(void)
{
  char *result;
  
  result=checkType(3,4,5);
  TEST_ASSERT_EQUAL_STRING("right angle",result);
}
void test_triangle_5_7_8_expect_obtuse(void)
{
  char *result;
  
  result=checkType(5,7,8);
  TEST_ASSERT_EQUAL_STRING("obtuse",result);
}
void test_triangle_6_6_10_expect_accute(void)
{
  char *result;
  
  result=checkType(6,6,10);
  TEST_ASSERT_EQUAL_STRING("accute",result);
}
