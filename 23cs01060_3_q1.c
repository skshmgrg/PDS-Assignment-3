#include<stdio.h>
int main()
{   int a;
    printf("enter an integer\n");
    scanf("%d",&a);
    if(a>0)
    {printf("the number you entered is positive");}
    if(a==0)
    {printf("the number you entered is zero");}
    if(a<0)
    {printf("the number you entered is negative");}
}