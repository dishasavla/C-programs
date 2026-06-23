#include<stdio.h>

int main()
{
    int number,q,fact,result=0;
    printf("Enter the Number : ");
    scanf("%d" ,&number);

    q=number;
    while(q!=0)
    {
        int rem=q%10;
        fact=1;
        for(int i=1; i<=rem; i++)
        {
            fact=fact*i;
        }
        result += fact;
        q /=10;
    }
    if(result==number)
    {
        printf("%d is a strong number.\n", number);
    }
    else
    {
        printf("%d is not a strong number.\n", number);
    }
    return 0;
}