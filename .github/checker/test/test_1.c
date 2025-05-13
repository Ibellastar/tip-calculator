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
    printf("calculate_bill(15.0, 8.0, 20.0)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 19.44f, calculate_bill(15.0f, 8.0f, 20.0f));
    fflush(stdout);
}

void test_2(void) {
    printf("calculate_bill(100.0, 15.0, 30.0)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 149.50f, calculate_bill(100.0f, 15.0f, 30.0f));
    fflush(stdout);
}

void test_3(void) {
    printf("calculate_bill(74.0, 10.0, 20.0)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.0f, 97.68f, calculate_bill(74.0f, 10.0f, 20.0f));
    fflush(stdout);
}

void test_4(void) {
    printf("calculate_bill(43.0, 11.0, 18.0)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 56.32f, calculate_bill(43.0f, 11.0f, 18.0f));
    fflush(stdout);
}