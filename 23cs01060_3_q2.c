#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("the largest if the 3 numbers is %d",a);
    else if(b>a && b>c)
    printf("the largest if the 3 numbers is %d",b);
    else if(c>b && c>a)
    printf("the largest if the 3 numbers is %d",c);
}