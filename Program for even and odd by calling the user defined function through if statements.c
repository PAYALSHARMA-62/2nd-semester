// Program for even and odd by calling the user defined function through if statements
#include<stdio.h>
void checkEvenOdd();
int main()
{
    int num;
    printf("Enter the number to check");
    scanf("%d",&num);
    checkEvenOdd(num);
}
void checkEvenOdd(int num)
{
    if(num%2==0)
    {
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
}
