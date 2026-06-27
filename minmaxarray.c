#include<stdio.h>

int minmax( int *arr, int len)
{
    int min,max;
    min=max=arr[0];
    for(int i=0; i<len; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        else if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("The maximum value of the array is : %d \n", max);
    printf("The minimum value of the array is : %d \n", min);

    return min,max;
};

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
    minmax(arr,len);
    return 0;
    

}