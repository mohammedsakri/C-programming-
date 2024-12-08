/*Aim : Write a C program that defines functions to perform the following tasks:
1. Create a function to calculate the area of a rectangle. The
function should take the length and width as input and return the
area.
2. Create a function to calculate the area of a circle. The function
should take the radius as input and return the area. (Use the value
of pi as 3.14159).
3. Create a function to calculate the area of a triangle. The
function should take the base and height as input and return the
area.
4. The program should:
o Prompt the user to select which geometric shape's area they
would like to calculate.
o Based on the user's selection, the program should call the
appropriate function and display the result.
Name : Mohammed Harish Sakri 
Roll No : 25
UIN : 241A030
Division : A
Branch : AIDS*/
#include <stdio.h>
// Function to calculate the area of a rectangle
float rectangleArea(float length, float width) {
return length * width;
}
// Function to calculate the area of a circle
float circleArea(float radius) {
const float PI = 3.14159;
return PI * radius * radius;
}
// Function to calculate the area of a triangle
float triangleArea(float base, float height) {
return 0.5 * base * height;
}
int main() {
int choice;
float length, width, radius, base, height, area;
// Prompt the user to select a shape
printf("Select a shape to calculate its area:\n");
printf("1. Rectangle\n");
printf("2. Circle\n");
printf("3. Triangle\n");
printf("Enter your choice (1/2/3): ");
scanf("%d", &choice);
// Perform calculations based on user choice
switch (choice) {
case 1:
// Rectangle area
printf("Enter length and width of the rectangle: ");
scanf("%f %f", &length, &width);
area = rectangleArea(length, width);
printf("The area of the rectangle is: %.2f\n", area);
break;
case 2:
// Circle area
printf("Enter the radius of the circle: ");
scanf("%f", &radius);
area = circleArea(radius);
printf("The area of the circle is: %.2f\n", area);
break;
case 3:
// Triangle area
printf("Enter the base and height of the triangle: ");
scanf("%f %f", &base, &height);
area = triangleArea(base, height);
printf("The area of the triangle is: %.2f\n", area);
break;
default:
printf("Invalid choice! Please select a valid option (1/2/3).\n");
}
return 0;
}
