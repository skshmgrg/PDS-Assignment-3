#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the lengths of 3 sides of triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b)
    printf("the 3 given sides can form a triangle");
    else
    printf("the 3 given sides cannot form a triangle");
}