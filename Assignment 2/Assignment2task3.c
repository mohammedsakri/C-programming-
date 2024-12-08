/*Aim : C program to add two distances in feet and inches using structure
Name : Mohammed Harish Sakri 
Roll No : 25
UIN : 241A030
Division : A
Branch : AIDS*/
#include <stdio.h>

// Define a structure to represent a distance
struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // Convert inches to feet if greater than or equal to 12
    if (result.inches >= 12.0) {
        result.feet += (int)(result.inches / 12);
        result.inches = (int)result.inches % 12 + (result.inches - (int)result.inches);
    }

    return result;
}

int main() {
    struct Distance d1, d2, result;

    // Input the first distance
    printf("Enter the first distance (feet inches): ");
    scanf("%d %f", &d1.feet, &d1.inches);

    // Input the second distance
    printf("Enter the second distance (feet inches): ");
    scanf("%d %f", &d2.feet, &d2.inches);

    // Add the distances
    result = addDistances(d1, d2);

    // Display the result
    printf("The total distance is %d feet %.2f inches\n", result.feet, result.inches);

    return 0;
}
