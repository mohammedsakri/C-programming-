/*Aim : Write a C program to read age of 15 person and count total Baby age,
School age and adult age. (Hint: While loop).
Name : Mohammed Harish Sakri 
Roll No : 25
UIN : 241A030
Division : A
Branch : AIDS*/
#include <stdio.h>
int main(){
int age;
int babyCount = 0, schoolAgeCount = 0, adultCount = 0;
 int i = 0;
 while (i <15) {
 printf("Enter the age of person [%d]: ", i + 1); //Input Age from user
 scanf("%d", &age);
 if (age <= 3) {
 babyCount++;}
 else if (age >= 4 && age <= 16)
 {schoolAgeCount++;}
 else {adultCount++;}
 i++; }
 //Display the Output
printf("\nBaby age: %d\n", babyCount);
printf("School age: %d\n", schoolAgeCount);
printf("Adult age: %d\n", adultCount);
return 0;
}
