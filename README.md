# Assignment: Tip Calculator

## Introduction

In this assignment you will practice working with data types and arithmetic operators in the C programming language.

## Starter Files

The starter files for this exercise are located in the `src` directory. Implement your code inside the following file:

1. `tip_calculator.c`

## Instructions
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
     * Return **total_with_tip**.

## Rubric

## Run Checks
To check your work, run the following command:

```bash
$ make checker
```

This will run the tests and output the results.

### Terminal Output
If all checks pass, you will see the following output:
```bash
1/4 Test 1 - Whole Number Input                                   OK              0.01s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
calculate_bill(15.0, 8.0, 20.0)
../.github/checker/test/test_1.c:13:test_1:PASS
calculate_bill(100.0, 15.0, 30.0)
../.github/checker/test/test_1.c:20:test_2:PASS
calculate_bill(74.0, 10.0, 20.0)
../.github/checker/test/test_1.c:27:test_3:PASS
calculate_bill(43.0, 11.0, 18.0)
../.github/checker/test/test_1.c:34:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

2/4 Test 2 - Single Decimal Point Input                           OK              0.00s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
calculate_bill(12.5, 6.5, 18.5)
../.github/checker/test/test_2.c:13:test_1:PASS
calculate_bill(55.3, 12.7, 21.9)
../.github/checker/test/test_2.c:20:test_2:PASS
calculate_bill(124.8, 10.3, 22.1)
../.github/checker/test/test_2.c:27:test_3:PASS
calculate_bill(32.1, 15.6, 20.2)
../.github/checker/test/test_2.c:34:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

3/4 Test 3 - Two Decimal Point Input                              OK              0.00s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
calculate_bill(23.50, 11.20, 20.50)
../.github/checker/test/test_3.c:13:test_1:PASS
calculate_bill(55.03, 12.07, 21.09)
../.github/checker/test/test_3.c:20:test_2:PASS
calculate_bill(124.18, 10.13, 22.11)
../.github/checker/test/test_3.c:27:test_3:PASS
calculate_bill(32.21, 15.62, 20.22)
../.github/checker/test/test_3.c:34:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

4/4 Test 4 - Mixed Number Input - Whole Numbers & Decimals        OK              0.00s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
calculate_bill(14, 8.20, 18)
../.github/checker/test/test_4.c:13:test_1:PASS
calculate_bill(13.14, 7.65, 20)
../.github/checker/test/test_4.c:20:test_2:PASS
calculate_bill(52.50, 8, 25)
../.github/checker/test/test_4.c:27:test_3:PASS
calculate_bill(32, 6.15, 22.50)
../.github/checker/test/test_4.c:34:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――


Ok:                 4   
Expected Fail:      0   
Fail:               0   
Unexpected Pass:    0   
Skipped:            0   
Timeout:            0  
```
If there are failing checks you will see summary of the failing tests:

```bash
1/4 Test 1 - Whole Number Input                                   FAIL            0.01s   exit status 4
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
calculate_bill(15.0, 8.0, 20.0)
../.github/checker/test/test_1.c:16:test_1:FAIL: Expected 19.44 Was 15
calculate_bill(100.0, 15.0, 30.0)
../.github/checker/test/test_1.c:23:test_2:FAIL: Expected 149.5 Was 100
calculate_bill(74.0, 10.0, 20.0)
../.github/checker/test/test_1.c:30:test_3:FAIL: Expected 97.68 Was 74
calculate_bill(43.0, 11.0, 18.0)
../.github/checker/test/test_1.c:37:test_4:FAIL: Expected 56.32 Was 43

-----------------------
4 Tests 4 Failures 0 Ignored 
FAIL
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

2/4 Test 2 - Single Decimal Point Input                           FAIL            0.00s   exit status 4
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
calculate_bill(12.5, 6.5, 18.5)
../.github/checker/test/test_2.c:16:test_1:FAIL: Expected 15.78 Was 12.5
calculate_bill(55.3, 12.7, 21.9)
../.github/checker/test/test_2.c:23:test_2:FAIL: Expected 75.97 Was 55.3
calculate_bill(124.8, 10.3, 22.1)
../.github/checker/test/test_2.c:30:test_3:FAIL: Expected 168.08 Was 124.8
calculate_bill(32.1, 15.6, 20.2)
../.github/checker/test/test_2.c:37:test_4:FAIL: Expected 44.6 Was 32.1

-----------------------
4 Tests 4 Failures 0 Ignored 
FAIL
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

3/4 Test 3 - Two Decimal Point Input                              FAIL            0.00s   exit status 4
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
calculate_bill(23.50, 11.20, 20.50)
../.github/checker/test/test_3.c:16:test_1:FAIL: Expected 31.49 Was 23.5
calculate_bill(55.03, 12.07, 21.09)
../.github/checker/test/test_3.c:23:test_2:FAIL: Expected 74.68 Was 55.03
calculate_bill(124.18, 10.13, 22.11)
../.github/checker/test/test_3.c:30:test_3:FAIL: Expected 167 Was 124.18
calculate_bill(32.21, 15.62, 20.22)
../.github/checker/test/test_3.c:37:test_4:FAIL: Expected 44.65 Was 32.12

-----------------------
4 Tests 4 Failures 0 Ignored 
FAIL
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

4/4 Test 4 - Mixed Number Input - Whole Numbers & Decimals        FAIL            0.00s   exit status 4
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
calculate_bill(14, 8.20, 18)
../.github/checker/test/test_4.c:16:test_1:FAIL: Expected 17.87 Was 14
calculate_bill(13.14, 7.65, 20)
../.github/checker/test/test_4.c:23:test_2:FAIL: Expected 16.97 Was 13.14
calculate_bill(52.50, 8, 25)
../.github/checker/test/test_4.c:30:test_3:FAIL: Expected 70.88 Was 52.5
calculate_bill(32, 6.15, 22.50)
../.github/checker/test/test_4.c:37:test_4:FAIL: Expected 41.61 Was 32

-----------------------
4 Tests 4 Failures 0 Ignored 
FAIL
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――


Summary of Failures:

1/4 Test 1 - Whole Number Input                            FAIL            0.01s   exit status 4
2/4 Test 2 - Single Decimal Point Input                    FAIL            0.00s   exit status 4
3/4 Test 3 - Two Decimal Point Input                       FAIL            0.00s   exit status 4
4/4 Test 4 - Mixed Number Input - Whole Numbers & Decimals FAIL            0.00s   exit status 4

Ok:                 0   
Expected Fail:      0   
Fail:               4   
Unexpected Pass:    0   
Skipped:            0   
Timeout:            0   
```


### Github Output

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

## Optional Challenge
Use printf and scanf to make your tip calculator interactive. 
#### Starter Files
Implement your code inside the file:
1. `main.c`

### Instructions
In main.c, use printf and scanf to interact with the user:

Prompt the user to enter the total bill amount, tax percentage, and the tip percentage.
Call the calculate_bill function and display total amount of money owed inside a printf message.

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