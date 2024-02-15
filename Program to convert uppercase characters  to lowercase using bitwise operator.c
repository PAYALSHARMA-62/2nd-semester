// Program to convert uppercase to lowercase using bitwise operator
#include<stdio.h>
void main()
{
    char Uppercase,Lowercase;
    printf("Enter the Uppercase letter");
    scanf("%c",&Uppercase);
    Lowercase=Uppercase|32;
    printf("Lowercase=%c",Lowercase);
}