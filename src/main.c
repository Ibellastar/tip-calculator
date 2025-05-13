#include <stdio.h>
#include "tip_calculator.h"  // make sure this header declares calculate_bill

int main() {
    float total_bill, tax_percentage, tip_percentage;

    printf("Enter the total bill amount: ");
    scanf("%f", &total_bill);

    printf("Enter the tax percentage: ");
    scanf("%f", &tax_percentage);

    printf("Enter the tip percentage: ");
    scanf("%f", &tip_percentage);

    float total_with_tip = calculate_bill(total_bill, tax_percentage, tip_percentage);
    printf("Total amount to be paid (including tax and tip): %.2f\n", total_with_tip);

    return 0;
}
