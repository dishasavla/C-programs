#include<stdio.h>

int main()
{
    //Print 2D array

    int n,m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    printf("\n");
    
    int a[n][m];

    printf("Enter the elements :  ");
    printf("\n");
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The 2D array for the given elements is : \n");
    printf("\n");
     for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int c,d,e;
    printf("Enter the number of blocks: ");
    scanf("%d", &c);
    printf("\n");
    printf("Enter the number of rows: ");
    scanf("%d", &d);
    printf("\n");
    printf("Enter the number of columns: ");
    scanf("%d", &e);
    printf("\n");

    int b[c][d][e]; 

    printf("Enter the elements : ");
    printf("\n");
    for(int n=0; n<c; n++)
    {
        for(int m=0;m<d;m++)
        {
            for(int q=0;q<e;q++)
            {
                scanf("%d", &b[n][m][q]);

            }
        }
    }
    printf("The 3D array for the given elements is : \n");
    printf("\n");
    for(int n=0; n<c; n++)
    {
        for(int m=0;m<d;m++)
        {
            for(int q=0;q<e;q++)
            {
                printf("%d ", b[n][m][q]);
            }
            printf("\n");
        }
    }
    return 0;
}