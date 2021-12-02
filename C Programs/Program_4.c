#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1;
    printf("Enter the limit:\t");
    scanf("%d",&n);
    do
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
        i++;
    } while (i<=n);
}