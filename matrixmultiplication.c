#include<stdio.h>

#define MAX 50

int main()
{
    int arows,acols;
    int brows,bcols;

    printf("Enter the number of rows and columns for Matrix a:  ");
    scanf("%d %d", &arows, &acols);
    
    printf("Enter the number of rows and columns for Matrix b:  ");
    scanf("%d %d", &brows, &bcols);

    int a[arows][acols];
    int b[brows][bcols];
    
    if(acols==brows)
    {
    printf("Enter the elements of Matrix a: \n");
    for(int i=0;i<arows;i++)
    {
        for(int j=0;j<acols;j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    printf("Enter the elements of Matrix b: \n");
    for(int i=0;i<brows;i++)
    {
        for(int j=0;j<bcols;j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
    
    printf("The resultant matrix is: \n");
    int product[arows][bcols];
    int sum=0;
    for(int i=0; i<arows;i++)
    {
        for(int j=0; j<bcols;j++)
        {
            for(int k=0;k<acols;k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j]= sum;
            printf("%d ", product[i][j]);
            sum=0;
        }
        printf("\n");
    }
} 
else 
{
    printf("The multiplictaion of two arrays is not possible");
}
return 0;
    
}