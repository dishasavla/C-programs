//WAP TO PRINT THE NUMBERS FROM 1 TO 10 USING INDIRECT RECURSION ( IF THE NUMBER IS ODD THEN ADD 1 AND WHEN THE NUMBER IS EVEN THEN SUBTACT 1)

#include<stdio.h>
void even(int n);
void odd(int n)
{
    if(n<=10)
    {
        printf("%d ", n+1);
        n++;
        even(n);
    }
    return ;
}
void even(int n)
{
    if(n<=10)
    {
        printf("%d ", n-1);
        n++;
        odd(n);
    }
    return ;
}

int main()
{
   odd(1);
}
