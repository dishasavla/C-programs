#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the value of num1 : ");
    scanf("%d",&num1);

    if(num1%2==0)
    {
        printf("%d is an even number\n",num1);
    }
    else
    {
        printf("%d is an odd number\n",num1);
    }
    return 0;

}