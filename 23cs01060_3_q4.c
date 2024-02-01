#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3;
    printf("enter the coordinated of the first point in the format:x1,y1\n");
    scanf("%f,%f",&x1,&y1);
    printf("enter the coordinated of the second point in the format:x2,y2\n");
    scanf("%f,%f",&x2,&y2);
    printf("enter the coordinated of the third point in the format:x3,y3\n");
    scanf("%f,%f",&x3,&y3);
    if ((y3-y2)/(x3-x2)==(y2-y1)/(x2-x1))
    printf("the given points lie on a straight line");
    else
    printf("the given points do not lie on a straight line");
}