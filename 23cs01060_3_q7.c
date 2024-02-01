#include<stdio.h>
int main()
{
float n,k,m,w,t;
char a;
printf("Please enter the marks obtained\n");
scanf("%f",&m);
printf("enter the total number of classes\n");
scanf("%f",&k);
printf("enter the number of classes attended\n");
scanf("%f",&n);
w=n/k;
t=m*w;
if(t>=90)
{a='A';}
else if(t>=80 && t<89)
{a='B';}
else if(t>=70 && t<79)
{a='C';}
else if(t>=60 && t<69)
{a='D';}
else if(t>=50 && t<59)
{a='E';}
else if(t>=40 && t<49)
{a='P';}
else if(t<40)
{a='F';}
printf("Final Score= %f\nGrade is = %c",t,a);
}