#include<stdio.h>

int main()
{
    int rem,q,number,result=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    q=number;

    while(q!=0)
    {
        rem=q%10;
        result=result*10+rem;
        q=q/10;
    }
    if(result==number)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
