#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    printf("The sum of num1 and num2 is: %d\n", num1 + num2);
    printf("The difference of num1 and num2 is: %d\n", num1 - num2);
    printf("The product of num1 and num2 is: %d\n", num1 * num2);

    if (num2 != 0)
    {
        printf("The quotient of num1 and num2 is: %d\n", num1 / num2);
        printf("The remainder of num1 and num2 is: %d\n", num1 % num2);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}