/*
AIM: Write a C program to convert specified days into years, weeks and
days. Write an algorithm & draw a flowchart for the same.
Name: Mohammed Harish Sakri 
UIN: 241A030
DIV: A
DEPT.: AI&DS
ROLL-NO: 25
*/
#include <stdio.h>
int main() {
 int days, years, weeks, remaining_days;
 //take the input from user
 printf("Enter the number of days:");
 scanf("%d",&days);
 // Convert days into years, weeks, and remaining days
 years = days / 365;
 remaining_days = days % 365;
 weeks = remaining_days / 7;
 remaining_days = remaining_days % 7;
 // Output the result
 printf("Years: %d\n", years);
 printf("Weeks: %d\n", weeks);
 printf("Days: %d\n", remaining_days);
 return 0;
}
/* OUTPUT:
Enter the number of days:1329
Years: 3
Weeks: 33
Days: 3
*/