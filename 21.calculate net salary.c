#include <stdio.h>

int main() {
    float grossSalary, allowances, deductions, netSalary;


    printf("Enter Gross Salary: ");
    scanf("%f", &grossSalary);


    allowances = 0.10 * grossSalary;


    deductions = 0.03 * grossSalary;


    netSalary = grossSalary + allowances - deductions;


    printf("Allowances: %.2f\n", allowances);
    printf("Deductions: %.2f\n", deductions);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}
