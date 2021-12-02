#include<stdio.h>
void main()
{
    int a[10],*ptr,i,p,small;
    ptr=&a[0];
    printf("Enter the size of array\n");
    scanf("%d", &p);
    printf("Enter the values of array\n");
    for(i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=0;i<p;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
        printf("%d\t",*ptr);
        ptr++;
    }
    printf("\n Smallest of array is %d",small);
}