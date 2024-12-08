/*Aim : Write a C program to print the following Pyramid:
*
**
***
****
*****
Name : Mohammed Harish Sakri 
Roll No : 25
UIN : 241A030
Division : A
Branch : AIDS*/
#include <stdio.h>
int main() {
int i, j, rows = 5;
for(i = 1; i <= rows; i++) {
 for(j = 1; j <= i; j++) {
 printf("*"); }
 printf("\n"); }
return 0;
}
