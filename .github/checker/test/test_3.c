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
    printf("calculate_bill(23.50, 11.20, 20.50)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 31.49f, calculate_bill(23.50f, 11.20f, 20.50f));
    fflush(stdout);
}

void test_2(void) {
    printf("calculate_bill(55.03, 12.07, 21.09)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 74.68f, calculate_bill(55.03f, 12.07f, 21.09f));
    fflush(stdout);
}

void test_3(void) {
    printf("calculate_bill(124.18, 10.13, 22.11)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 167.00f, calculate_bill(124.18f, 10.13f, 22.11f));
    fflush(stdout);
}

void test_4(void) {
    printf("calculate_bill(32.21, 15.62, 20.22)\n");
    fflush(stdout);
    TEST_ASSERT_FLOAT_WITHIN(0.01f, 44.65f, calculate_bill(32.12f, 15.62f, 20.22f));
    fflush(stdout);
}