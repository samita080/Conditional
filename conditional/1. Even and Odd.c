// WAP to find whether the number is odd or even using a ternary operator.

#include <stdio.h>

int main() {
    int num;

    printf("Name: Samita Bam\nRoll no:12\nDescription: Odd or Even\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    // Use ternary operator to check for even or odd
    printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");

    return 0;
}

