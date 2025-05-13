#include "unity.h"
#include "tip_calculator.h"
#include <stdio.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    printf("calculate_bill(12.5, 6.5, 18.5)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 15.78f, calculate_bill(12.5f, 6.5f, 18.5f));
    fflush(stdout);
}

void test_2(void) {
    printf("calculate_bill(55.3, 12.7, 21.9)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 75.97f, calculate_bill(55.3f, 12.7f, 21.9f));
    fflush(stdout);
}

void test_3(void) {
    printf("calculate_bill(124.8, 10.3, 22.1)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 168.08f, calculate_bill(124.8f, 10.3f, 22.1f));
    fflush(stdout);
}

void test_4(void) {
    printf("calculate_bill(32.1, 15.6, 20.2)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 44.60f, calculate_bill(32.1f, 15.6f, 20.2f));
    fflush(stdout);
}