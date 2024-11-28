#include <stdio.h>

int main() {
    float num1, num2, result;
    int mod_result;
    char operator;

    printf("\t\t\t*CALCULATOR*\n\n");
    printf("\t Operations : \n");
    printf("\t\t + : Addition\n");
    printf("\t\t - : Subtraction\n");
    printf("\t\t * : Multiplication\n");
    printf("\t\t / : Division\n");
    printf("\t\t %%: Modulus\n\n");

repeat:
    printf("Enter First Operand: ");
    scanf("%f", &num1);
    printf("Enter Second Operand: ");
    scanf("%f", &num2);
    printf("Enter Operation: ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.1f + %.1f = %.1f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.1f - %.1f = %.1f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.1f * %.1f = %.1f\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Cannot divide by Zero\n");
            } else {
                result = num1 / num2;
                printf("%.1f / %.1f = %.1f\n", num1, num2, result);
            }
            break;
        case '%':
            if ((int)num2 == 0) {
                printf("Cannot perform modulus by Zero\n");
            } else {
                mod_result = (int)num1 % (int)num2;
                printf("%.0f %% %.0f = %d\n", num1, num2, mod_result);
            }
            break;
        default:
            printf("Invalid Operator. Try Again.\n");
            break;
    }

    printf("Continue? (Y/N): ");
    scanf(" %c", &operator);
    if (operator == 'N' || operator == 'n') {
        printf("Thank you for using Calculator\n");
        return 0;
    }
    printf("\n\n");
    goto repeat;

    return 0;
}
