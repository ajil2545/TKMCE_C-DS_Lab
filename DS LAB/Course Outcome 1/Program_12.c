//Bit String
#include<stdio.h>
int u[10],a[10],b[10],c[10],d[10],i,j,un,an,bn,ch=1,option;
void unionset()
{
	printf("\n A union B: ");
	for(j=0;j<un;j++)
	{
		
		printf("%d",c[j] | d[j]);
		
	}
}
void intersection()
{
	printf("\n A intersection B: ");
	for(j=0;j<un;j++)
	{
		
		printf("%d",c[j] & d[j]);
		
	}
}
void difference()
{
	for(j=0;j<un;j++)
	{
		if(d[j]==0)
		{
			d[j]=1;
		}
		else
		{
			d[j]=0;		
		}		
	}

	printf("\n A - B: ");
	for(j=0;j<un;j++)
	{
		
		printf("%d",c[j] & d[j]);
		
	}
}
void display()
{
	printf("\n A: ");
	for(j=0;j<un;j++)
	{
		
		printf("%d",c[j]);
		
	}
	printf("\n B: ");
	for(j=0;j<un;j++)
	{
		
		printf("%d",d[j]);
		
	}
}
void main()
{
	printf("Enter the number of elements in Universal Set: \n");
	scanf("%d",&un);
	printf("Enter the Universal Set: \n");
	for(i=0;i<un;i++)
	{	
		scanf("%d",&u[i]);
	}
	printf("Enter the number of elements in Set A: \n");
	scanf("%d",&an);
	printf("Enter the Set A: \n");
	for(i=0;i<an;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("Enter the number of elements in Set B: \n");
	scanf("%d",&bn);
	printf("Enter the Set B:\n");
	for(i=0;i<bn;i++)
	{	
		scanf("%d",&b[i]);
	}
	for(j=0;j<un;j++)
	{
		c[j]=0;
		d[j]=0;
	}
	for(i=0;i<an;i++)
	{
		for(j=0;j<un;j++)
		{
			if(a[i]==u[j])
			{
				c[j]=1;
			}
		}
	}
	for(i=0;i<bn;i++)
	{
		for(j=0;j<un;j++)
		{
			if(b[i]==u[j])
			{
				d[j]=1;
			}
		}
	}
	while(ch==1)
	{
		printf("\n**** Main Menu ****\n");
		printf("1. Display A, B\n");
		printf("2. A Union B\n");
		printf("3. A Intersection B\n");
		printf("4. A - B\n");
		printf("Enter your option : \n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:display();
				break;
			case 2:unionset();
				break;
			case 3:intersection();
				break;
			case 4:difference();
				break;
			default:printf("Invalid Operator");
		}
		printf("\nDo you want to continue(0/1) : ");
		scanf("%d",&ch);
	}
}
