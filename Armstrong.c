#include<stdio.h>

int main()
{
    int rem,q,cnt,number,mul,count=0,result=0;
    printf("Enter the Number : ");
    scanf("%d",&number);
    q=number;
    while(q!=0)
    {
        rem=q%10;
        count++;
        q=q/10;
    }
    cnt=count;
    q=number;
    mul=1;
    while(q!=0)
    {
        rem=q%10;
        mul=1;
        for(int i=0;i<cnt;i++)
        {
            mul=mul*rem;
        }
        result=result+mul;
        q=q/10;
    }
    if(result==number)
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }
    return 0;
}
    