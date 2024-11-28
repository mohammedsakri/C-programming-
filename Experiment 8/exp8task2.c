/*Aim : WAP to check if the entered string is pallindrome or not.
Name : Mohammed Harish Sakri 
Roll no : 25
UIN : 241A030
Division : A*/
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("\t\t\t*** Pallindrome Finder ***\n\n\n");

    printf("\n Enter Your String : ");
    gets(str);

for(i = 0; i < strlen(str) - 1; i++)
    {
        if(str[i] != str[strlen(str) - 1 - i])
        {
            printf("The String is NOT a Palindrome");
            return 0;
        }
    }
 printf("\n The String is Pallindrome.");

 return 0;
}
