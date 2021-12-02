#include<stdio.h>
#include<conio.h>
int area(int,int);
void main()
{
    int l,b,a;
    printf("Enter the length and the breadth\n");
    scanf("%d%d",&l,&b);
    a=area(l,b);
    printf("Area of the rectangle is %d",a);
}
int area(int p,int q)
{
    return(p*q);
}