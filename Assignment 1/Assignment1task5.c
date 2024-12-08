/*Aim : Write a C program to print Fibonacci series using recursion.
Name : Mohammed Harish Sakri 
Roll No : 25
UIN : 241A030
Division : A
Branch : AIDS*/
#include <stdio.h>
int fibonacci(int n) {
if (n == 0) {
return 0;
} else if (n == 1) {
return 1;
} else {
return fibonacci(n - 1) + fibonacci(n - 2); } } //Recursive Function

int main() {
int terms, i;
// Ask the user to enter the number of terms
printf("Enter total number of terms: ");
scanf("%d", &terms);
printf("Fibonacci series is: ");
// Loop through the range and print Fibonacci numbers
for (i = 0; i < terms; i++) {
printf("%d ", fibonacci(i));
}
printf("\n");
return 0;
}
