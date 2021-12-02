//Array Operations
#include<stdio.h>
#define n 5
int a[n],i;
void largest()
{
	int l=a[0];
	for(i=1;i<n;i++)
	{
		if(l < a[i])
		{
		      l = a[i];
		}
	}
	printf("%d is the largest number",l);
}
void smallest()
{
	int s=a[0];
	for(i=1;i<n;i++)
	{
		if (s > a[i])
		{
		      s = a[i];
		}
	}
	printf("%d is the smallest number",s);
}
void reverse()
{
	printf("Reversed array\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d \t",a[i]);
	}
}
void sum()
{
	int sumn=0;
	for(i=0;i<n;i++)
	{
		sumn=sumn+a[i];
	}
	printf("%d is the sum of array elements",sumn);
}
void mean()
{
	int sumn=0,m;
	for(i=0;i<n;i++)
	{
		sumn=sumn+a[i];
	}
	m=sumn/n;
	printf("%d is the mean of array elements",m);
}
void main()
{
	int c,d;
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	do
	{
		printf("Enter your choice\n 1 largest \n 2 smallest \n 3 reverse \n 4 sum \n 5 mean \n");
		scanf("%d",&c);
		switch(c)
		{
			case 1: largest();
			break;
			case 2: smallest();
			break;
			case 3: reverse();
			break;
			case 4: sum();
			break;
			case 5: mean();
			break;
			default: printf("Wrong Input");
		}
		printf("\nDo you  want to continue(0/1)?\n");
		scanf("%d",&d);
	}while(d!=0);
	
}
