#include<stdio.h>

int main()
{
    int num1,num2,operator;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    printf("Enter the operator (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ");
    scanf("%d", &operator);

    switch(operator)
    {
        case 1:
            printf("The sum of %d and %d is : %d\n", num1,num2, num1+num2);
            break;
        case 2:
            printf("The subtraction of %d and %d is : %d\n", num1,num2, num1-num2);
            break;
        case 3:
            printf("The multiplication of %d and %d is : %d\n", num1,num2, num1*num2);
            break;
        case 4:
            if(num2 !=0)
            {
                printf("The division of %d and %d is : %d\n", num1,num2, num1/num2);
            }
            else
            {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
               printf("Invalid operator selected.\n");
                break;
    }
    return 0;
}