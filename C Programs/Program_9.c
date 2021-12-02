#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],i,j,big=0,p,q;
    printf("Enter the rows and columns\n");
    scanf("%d%d",&p,&q);
    printf("Enter the values of array\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Array values are\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            if(a[i][j]>big)
            {
                big=a[i][j];
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Biggest of array is %d",big);
}