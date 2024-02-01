#include<stdio.h>
int main()
{
    int original,n,a,a1,b,b1,c,c1,d,d1,e,e1,f,f1;
    printf("enter the desired number\n");
    scanf("%d",&n);
    original=n;
    n=n*n;
    a=n%10;a1=n/10;b=n%100;b1=n/100;c=n%1000;c1=n/1000;d=n%10000;d1=n/10000;e=n%100000;e1=n/100000;f=n%1000000;f1=n/1000000;
    if (a+a1==original && a!=0 && a1!=0)
    printf("The number you entered is a kaprekar number.");
    else if (b+b1==original && b!=0 && b1!=0)
    printf("The number you entered is a kaprekar number.");
    else if (c+c1==original && c!=0 && c1!=0)
    printf("The number you entered is a kaprekar number.");
    else if (d+d1==original && d!=0 && d1!=0)
    printf("The number you entered is a kaprekar number.");
    else if (e+e1==original && e!=0 && e1!=0)
    printf("The number you entered is a kaprekar number.");
    else if (f+f1==original && f!=0 && f1!=0)
    printf("The number you entered is a kaprekar number.");
    else 
    printf("The number you entered is not a kaprekar number");
}