#include<stdio.h>

int FactorialRecursive(int num){

    if(num<=1){
        return 1;
    }


return num * FactorialRecursive(num-1);
}


 int main()
 {
     int num;

     printf("\t\t\t*** Recursive Factorial  Function *** \n\n");

     printf("Enter number:");
     scanf("%d", &num);

     printf("Factorial of %d is %d" , num, FactorialRecursive(num));

     return 0;
 }

