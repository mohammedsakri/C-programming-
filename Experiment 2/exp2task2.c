/* Aim: WAP to find the sum of all the odd numbers between numbers entered by the user */
#include <stdio.h>
int main() {
    printf("\t\t***Sum of odd numbers***\n\n\n");
    int low_range, high_range, remainder, sum = 0, odd_num;

    printf("Enter the low end of the range:\t");
    scanf("%d", &low_range);

    printf("Enter the high end of the range:\t");
    scanf("%d", &high_range);

    if (low_range < high_range) {
        for (odd_num = low_range; odd_num <= high_range; odd_num++) {
            remainder = odd_num % 2;

            if (remainder != 0) {
                sum = odd_num + sum;
            }
        }

        printf("The sum of all odd numbers in the given range of %d to %d is equal to: %d\n",
               low_range, high_range, sum);
    } else {
        printf("Invalid: The low range must be less than the high range\n");
    }

    return 0;
}
