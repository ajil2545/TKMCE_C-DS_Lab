#include<stdio.h>
#include<conio.h>
int biggest(int,int);
void main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    c=biggest(a,b);
    printf("Biggest of the two is %d",c);
}
int biggest(int p,int q)
{
    if(p>q)
    {
        return(p);
    }
    else
    {
        return(q);
    }
}