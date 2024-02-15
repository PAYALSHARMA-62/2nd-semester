// program to print the sum of all the elements in array
#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the size");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of all elemnts in the array=%d",sum,i);
}