/* Aim: WAP to define a counter function to print how many times the function 
is called. Use storage classes.Name: Nasaroddin Salim KaziRoll no: 33UIN: 
241A040Division: A */
#include<stdio.h>
// Counter function definitionvoid counter() { static int count = 0; // static 
variable retains its value between function calls count++; printf("Counter 
Function Call: %d\n", count);}
int main() { printf("\t\t\t***Storage Class***\n\n");
 // Calling the counter function 8 times using a loop for(int i = 1; i <= 8; 
i++) { counter(); } return 0;}