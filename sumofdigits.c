#include<stdio.h>
 int main()
 {
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    int sum=0;
    while(number>0)
    {
        sum +=number%10;
        number /=10;
    }
    printf("Sum of digits: %d", sum);
    return 0;
 }