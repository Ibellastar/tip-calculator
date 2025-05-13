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
    printf("calculate_bill(14, 8.20, 18)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 17.87f, calculate_bill(14.0f, 8.20f, 18.0f));
    fflush(stdout);
}

void test_2(void) {
    printf("calculate_bill(13.14, 7.65, 20)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 16.97f, calculate_bill(13.14f, 7.65f, 20.0f));
    fflush(stdout);
}

void test_3(void) {
    printf("calculate_bill(52.50, 8, 25)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 70.88f, calculate_bill(52.50f, 8.0f, 25.0f));
    fflush(stdout);
}

void test_4(void) {
    printf("calculate_bill(32, 6.15, 22.50)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 41.61f, calculate_bill(32.0f, 6.15f, 22.50f));
    fflush(stdout);
}