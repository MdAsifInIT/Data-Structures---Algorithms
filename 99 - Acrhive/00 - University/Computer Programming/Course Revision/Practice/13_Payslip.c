/*

Step1: Create a structure named employee with members name, ID, department, basic pay, allowance, deductions, gross pay and net pay.
Step 2: Read in the following employee data from the console: name, ID, department, basic pay,
Step 3: Find allowance as : allowance = 20% of basic if basic <=Rs.25,000 else allowance = 10% of basic pay
Step 4: Calculate the gross pay as gross pay = basic pay + allowance
Step 5: Calculate deductions = 12.5% of gross and net = gross-deductions
Step 6: Print the details in the following format.
====================================================================
                    Employee Pay Slip
====================================================================
Employee Name:
Employee ID:
Employee dept.:
Basic pay:
Net pay:
======================================================================


*/
#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[100];
    int id;
    char department[100];
    float basicpay;
    float allowance;
    float deductions;
    float grosspay;
    float netpay;
} emp;

int main()
{
    emp e1;

    printf("Enter the name of the employee: ");
    fgets(e1.name, sizeof(e1.name), stdin);
    // Remove trailing newline from name
    e1.name[strcspn(e1.name, "\n")] = '\0';

    printf("Enter the ID of the employee: ");
    scanf("%d", &e1.id);
    getchar(); // Consume leftover newline

    printf("Enter the Department of the employee: ");
    fgets(e1.department, sizeof(e1.department), stdin);
    e1.department[strcspn(e1.department, "\n")] = '\0'; // Remove newline

    printf("Enter the basic pay of the employee: ");
    scanf("%f", &e1.basicpay);

    // Correct allowance calculation using floating-point
    if (e1.basicpay <= 25000)
    {
        e1.allowance = 0.20 * e1.basicpay;
    }
    else
    {
        e1.allowance = 0.10 * e1.basicpay;
    }

    e1.grosspay = e1.basicpay + e1.allowance;
    e1.deductions = 0.125 * e1.grosspay;
    e1.netpay = e1.grosspay - e1.deductions; // Correct net pay calculation

    // Print formatted output
    printf("\n====================================================================\n");
    printf("                    Employee Pay Slip\n");
    printf("====================================================================\n");
    printf("Employee Name: %s\n", e1.name);
    printf("Employee ID: %d\n", e1.id);
    printf("Employee Dept.: %s\n", e1.department);
    printf("Basic Pay: %.2f\n", e1.basicpay);
    printf("Net Pay: %.2f\n", e1.netpay);
    printf("====================================================================\n");

    return 0;
}