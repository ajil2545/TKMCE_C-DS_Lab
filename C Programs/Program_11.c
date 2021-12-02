#include<stdio.h> 
void main()
{ 
    int a[10],b[10],i,j,sum[10],p;
    printf("Enter the length of array\n");
    scanf("%d",&p);
    printf("Enter the values of first array\n");
    for(i=0;i<p;i++) 
    { 
        scanf("%d",&a[i]); 
    } 
    printf("Enter the values of second array\n");
    for(i=0;i<p;i++) 
    { 
        scanf("%d",&b[i]);
    }
    printf("First matrix\n");
    for(i=0;i<p;i++)
    {
        printf("%d\t",a[i]); 
    }
    printf("\nSecond matrix\n");
    for(i=0;i<p;i++)
    {
        printf("%d\t",b[i]); 
    }
    printf("\nSum matrix\n");
    for(i=0;i<p;i++)
    {
        sum[i]=a[i]+b[i];
        printf("%d\t",sum[i]); 
    }
} 
