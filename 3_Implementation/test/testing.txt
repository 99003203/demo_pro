#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_kmtom(void);
void test_mtocm(void);
void test_ftoi(void);
void test_itocm(void);
void test_cmtom(void);
void test_ytom(void);
void test_ytocm(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_kmtom);
  RUN_TEST(test_mtocm);
  RUN_TEST(test_ftoi);
  RUN_TEST(test_itocm);
  RUN_TEST(test_cmtom);
  RUN_TEST(test_ytom);
  RUN_TEST(test_ytocm);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1500, add(750, 7500));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, divide(2, 2));
}

void test_kmtom(void) {
  TEST_ASSERT_EQUAL(1000, kmtom(1));
 }
 
void test_mtocm(void) {
  TEST_ASSERT_EQUAL(200, mtocm(2));
 }
 
void test_ftoi(void) {
  TEST_ASSERT_EQUAL(36, ftoi(3));
}
 
 void test_itocm(void) {
  TEST_ASSERT_EQUAL(10, itocm(4));
}

void test_cmtom(void) {
  TEST_ASSERT_EQUAL(0, cmtom(5));
}

void test_ytom(void) {
  TEST_ASSERT_EQUAL(5, ytom(6));
 }
 
 void test_ytocm(void) {
  TEST_ASSERT_EQUAL(640, ytocm(7));
 }
