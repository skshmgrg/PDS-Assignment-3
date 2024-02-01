#include<stdio.h>
int main()
{   int n,sum;
    printf("enter the no of days of delay\n");
    scanf("%d",&n);
    if(n<=5)
    {sum=1*n;
    printf("your fine amount is %d",sum);}
    else if(6<=n && n<=10)
    {sum=5+(n-5)*2;
    printf("your fine amount is %d",sum);}
    else if(11<=n && n<=30)
    {sum=5+10+5*(n-10);
    printf("your fine amount is %d",sum);}
    else 
    printf("your membership has been cancelled");

}