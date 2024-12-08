/*Aim : C program to check a specified file exists or not.
Name : Mohammed Harish Sakri 
Roll No : 25
UIN : 241A030
Division : A
Branch : AIDS*/
#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;

    // Input the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file
    file = fopen(filename, "r");

    // Check if the file exists
    if (file) {
        printf("The file '%s' exists.\n", filename);
        fclose(file);
    } else {
        printf("The file '%s' does not exist.\n", filename);
    }

    return 0;
}
