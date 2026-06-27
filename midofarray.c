#include<stdio.h>

int midofarray(int *arr, int len)
{
    return arr[len/2];
}

int main()
{

    int n;
    printf("Enter the number of elements for the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values of the array: \n");
    for(int i=0;i<n;i++)
    {
      scanf("%d", &arr[i]);
    }
    int len= sizeof(arr)/sizeof(arr[0]);
    int mid = midofarray(arr,len);
    printf("The midpoint of the array has value :\n %d ", mid);
    return 0;
    
}