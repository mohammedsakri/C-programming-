/*
AIM: C program to add two distances in feet and inches using structure
Name: Mohammed Harish Sakri 
UIN: 241A030
DIV: A
DEPTT.: AI&DS
ROLL-NO: 25
*/
#include <stdio.h>
// Define the structure to hold distances in feet and inches
struct Distance {
 int feet;
 int inches;
};
// Function to add two distances
struct Distance add_distances(struct Distance d1, struct Distance d2) {
 struct Distance result;
 // Add feet and inches separately
 result.feet = d1.feet + d2.feet;
 result.inches = d1.inches + d2.inches;
 // Convert inches to feet if inches >= 12
 if (result.inches >= 12) {
 result.feet += result.inches / 12;
 result.inches = result.inches % 12;
 }
 return result;
}
int main() {
 struct Distance d1, d2, result;
 // Input first distance
 printf("Enter first distance in feet & inches: ");
 scanf("%d %d", &d1.feet, &d1.inches);
 // Input second distance
 printf("Enter second distance in feet & inches: ");
 scanf("%d %d", &d2.feet, &d2.inches);
 // Add the distances
 result = add_distances(d1, d2);
 // Output the total distance
 printf("Total distance- Feet: %d, Inches: %d\n", result.feet, result.inches);
 return 0;
}
/* OUTPUT:
Enter first distance in feet & inches: 10 8
Enter second distance in feet & inches: 5 7
Total distance- Feet: 16, Inches: 3
*/