/*
AIM: Write a C program to count vowels and consonants in a string
 using pointer
Name: Mohammed Harish Sakri 
UIN: 241A030
DIV: A
DEPTT.: AI&DS
ROLL-NO: 25
*/
#include <stdio.h>
#include <ctype.h> // For tolower() function
// Function to count vowels and consonants
void count_vowels_consonants(const char *str, int *vowels, int *consonants) {
 *vowels = 0;
 *consonants = 0;
 while (*str != '\0') {
 char ch = tolower(*str); // Convert character to lowercase
 if (ch >= 'a' && ch <= 'z') { // Check if character is a letter
 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
 (*vowels)++;
 } else {
 (*consonants)++;
 }
 }
 str++; // Move to the next character
 }
}
int main() {
 char str[100];
 int vowels, consonants;
 // Input the string
 printf("Enter a string: ");
 fgets(str, sizeof(str), stdin);
 // Count vowels and consonants using pointers
 count_vowels_consonants(str, &vowels, &consonants);
 // Output the results
 printf("Total number of VOWELS: %d, CONSONANTS: %d\n", vowels, consonants);
 return 0;
}
/* OUTPUT:
Enter a string: This is a test string
Total number of VOWELS: 5, CONSONANT: 16
*/