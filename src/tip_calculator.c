#include <stdio.h>

float calculate_bill(float total_bill, float tax_percentage, float tip_percentage) {
    float tax_amount = total_bill * (tax_percentage / 100);
    float total_with_tax = total_bill + tax_amount;
    float tip_amount = total_with_tax * (tip_percentage / 100);
    float total_with_tip = total_with_tax + tip_amount;
    return total_with_tip;
}