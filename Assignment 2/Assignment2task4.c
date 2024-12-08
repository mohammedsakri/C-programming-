/*Aim : Write a C program to count vowels and consonants in a string using pointer.
Name : Mohammed Harish Sakri 
Roll No : 25
UIN : 241A030
Division : A
Branch : AIDS*/
#include <stdio.h>
#include <ctype.h>

// Function to count vowels and consonants
void countVowelsAndConsonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    char *ptr = str;

    while (*ptr != '\0') {
        char ch = tolower(*ptr);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        ptr++;
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count vowels and consonants
    countVowelsAndConsonants(str, &vowels, &consonants);

    // Display the result
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
return 0;
 }   


