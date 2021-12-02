#include<stdio.h>
#include<conio.h>
int biggest(int,int);
void main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    biggest(a,b);
}
int biggest(int p,int q)
{
    if(p>q)
    {
        printf("Biggest of the two is %d",p);
    }
    else
    {
        printf("Biggest of the two is %d",q);
    }
}