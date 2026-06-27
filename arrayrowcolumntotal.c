//WAP that reads 5x5 array that gives the sum of the rows and the sum of the columns. 

#include<stdio.h>

int main()
{
    int i,j,sum=0;
    int arr[5][5]={
                {82,10,11,12,13},
                {12,34,44,56,77},
                {13,45,67,78,65},
                {23,45,63,56,43},
                {34,56,79,80,90}
    };

    //Rows Total 
    printf("Total sum of the rows is : \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum += arr[i][j];
        }
        printf("%d ", sum);
        sum=0;
    }
    printf("\n");
    //Columns Total 
    printf("Total sum of the columns is : \n");
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            sum += arr[i][j];
        }
        printf("%d ", sum);
        sum=0;
    }
    return 0;
}