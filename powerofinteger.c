#include<stdio.h>
int main()
{
    int base,exponent,result=1;
    printf("Enter the base : ");
    scanf("%d", &base);
    printf("Enter the exponent : ");
    scanf("%d", &exponent);
    int power=1;
    int expo=exponent;
    if(exponent>0)
    {
        while(exponent != 0 )
        {
            power=power*base;
            exponent--;
        }
    }
    printf("The result is : %d", power);
    return 0;
}