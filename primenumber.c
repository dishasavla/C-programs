#include<stdio.h>
#include<math.h>

int main()
{
    int val1,val2,number,q,result=0,count;
    printf("Enter the number : ");
    scanf("%d" , &number);
    
    val1=ceil(sqrt(number));
    
    count=0;
    for(int i=2; i<=val1; i++)
    {
        if(number%i==0 && number !=i)
        {
            count++;
        }
    }
   if((count == 0 && number > 3) || number == 2 || number == 3)
    {
       printf("%d is a prime number.\n", number);
    }
    else
    {
       printf("%d is not a prime number.\n", number);
    }
    return 0;
}