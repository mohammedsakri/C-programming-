/*
AIM: Write a C program to calculate salary of an employee with name.
Write an algorithm & draw a flowchart for the same.
Name: Mohammed Harish Sakri 
UIN: 241A030
DIV: A
DEPT.: AI&DS
ROLL-NO: 25
*/
#include <stdio.h>
int main() {
 char name[50];
 float basic_salary, hra, da, pf, gross_salary;
 // Input employee details
 printf("Enter name: ");
 scanf("%s", name);
 printf("Enter Basic Salary: ");
 scanf("%f", &basic_salary);
 printf("Enter HRA: ");
 scanf("%f", &hra);
 printf("Enter D.A.: ");
 scanf("%f", &da);
 // Calculate PF as 12% of Basic Salary
 pf = 0.12 * basic_salary;
 // Calculate Gross Salary
 gross_salary = basic_salary + hra + da - pf;
 // Output the details
 printf("\nName: %s\n", name);
 printf("BASIC: %.6f\n", basic_salary);
 printf("HRA: %.6f\n", hra);
 printf("DA: %.6f\n", da);
 printf("PF: %.6f\n", pf);
 printf("***GROSS SALARY: %.6f ***\n", gross_salary);
 return 0;
}
/* OUTPUT:
Enter name: Mike
Enter Basic Salary: 23000
Enter HRA: 9500
Enter D.A.: 9500
Name: Mike
BASIC: 23000.000000
HRA: 9500.000000
DA: 9500.000000
PF: 2760.000000
***GROSS SALARY: 44760.000000 ***
*/    