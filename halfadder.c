#include<stdio.h>
int main()
{
    int a,b,sum,carry;
    printf("Enter the first binary number :  ");
    scanf("%d", &a);
    printf("Enter the second binary number :  ");
    scanf("%d", &b);
    
    while(b!=0)
    {
        sum=a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }
    printf("The sum of the two binary numbers is : %d\n", a);
    return 0;
}