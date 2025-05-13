# Assignment: Tip Calculator

### Introduction

In this assignment you will practice working with data types and arithmetic operators in the C programming language.

### Starter Files

The starter files for this exercise are located in the `src` directory. Implement your code inside the following files:

1. `tip_calculator.c`
2. `main.c`

### Instructions
* In the file **tip_calculator.c**, complete the function **float calculate_bill(float total_bill, float tax_percentage, float tip_percentage)**:
  * Calculate the **tax_amount**:
    * Multiply the total bill by the tax percentage divided by 100.
    * Store the result in a variable named **tax_amount**.   
  * Calculate the total after tax:
    * Add the original bill and the tax amount.
    * Store this in a variable named **total_with_tax**.

  * Calculate the tip amount:
    * Multiply the total after tax by the tip percentage divided by 100.
    * Store the result in a variable named **tip_amount**.

  * Calculate the final total:
     * Add the total after tax and the tip amount.
     * Store this in a variable named **total_with_tip**.


* In **main.c**, use **printf** and **scanf** to interact with the user:
  * Prompt the user to enter the total bill amount, tax percentage, and the tip percentage.
  * Call the **calculate_bill** function and display total amount of money owed inside a **printf** message.

### Compile the Program
To compile your program, run the following commands:
```bash
$ gcc -o tip_calculator src/tip_calculator.c src/main.c
$ ./tip_calculator
```

### Command-Line Interface
When you run the compiled program, it should prompt the user to enter the bill amount, tax percentage, and tip percentage. 
```bash
Enter the total bill amount: 13.50
Enter the tax percentage: 6.15
Enter the tip percentage: 20
```
The program calculates and outputs the total amount of money owed:

```bash
Total amount to be paid (including tax and tip): 17.20
```
### Run Checks
To check your work, run the following command:

```bash
$ make checker
```

This will run the tests and output the results.

### Output

If all checks pass, you will see the following output:

```bash
✅ Test 1 - Whole Number Input
../.github/checker/test/test_1.c:12:test_1:PASS

✅ Test 2 - Single Decimal Point Input
../.github/checker/test/test_2.c:12:test_2:PASS

✅ Test 3 - Two Decimal Point Input
../.github/checker/test/test_3.c:12:test_3:PASS

✅ Test 4 - Mixed Number Input - Whole Numbers & Decimals
../.github/checker/test/test_4.c:12:test_4:PASS

Ok:                 4
Expected Fail:      0
Fail:               0
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```

If there are failing checks you will see summary of the failing tests:

```
❌ Test 1 - Whole Number Input
../.github/checker/tests/test_1.c:13:test_1:FAIL: Expected 149.50 Was 145

❌ Test 2 - Single Decimal Point Input
../.github/checker/tests/test_2.c:14:test_2:FAIL: Expected 15.78 Was 16

❌ Test 3 - Two Decimal Point Input
../.github/checker/tests/test_3.c:14:test_3:FAIL: Expected 31.49 Was 314.9

❌ Test 4 - Mixed Number Input - Whole Numbers & Decimals
../.github/checker/tests/test_4.c:14:test_4:FAIL: Expected 17.87 Was 14

Summary of Failures:

1/4 Test 1 - Whole Number Input                                                   FAIL            0.14s   exit status 2
2/4 Test 2 - Single Decimal Point Input                                           FAIL            0.25s   exit status 2
3/4 Test 3 - Two Decimal Point Input                                              FAIL            0.35s   exit status 2
4/4 Test 4 - Mixed Number Input - Whole Numbers & Decimals                        FAIL            0.46s   exit status 2

Ok:                 0
Expected Fail:      0
Fail:               4
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```

In order to complete the exercise all tests must pass.