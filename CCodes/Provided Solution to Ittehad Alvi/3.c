#include <stdio.h>
int main()
{
    int annualSalary, monthlySalary;
    scanf("%d", &annualSalary);
    monthlySalary = annualSalary / 12;
    printf("Monthly Salary: %d\n", monthlySalary);
    return 0;
}