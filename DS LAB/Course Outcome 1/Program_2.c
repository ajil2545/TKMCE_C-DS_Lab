//Stack Operations
#include<stdio.h>
#define n 5
int t=-1, stack[n];
void push()
{
	int x;
	printf("\nEnter data\n");
	scanf("%d",&x);
	if(t==n-1)
	{
		printf("\nOverflow");
	}
	else
	{
		t++;
		stack[t]=x;
	}
}
void pop()
{
	int item;
	if(t==-1)
	{
		printf("\nUnderflow");
	}
	else
	{
		item=stack[t];
		printf("%d is poped from stack",item);
		t--;
	}
}
void top()
{
	if(t==-1)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("%d\n", stack[t]);
	}
}
void display()
{
	int i;
	for(i=t;i>=0;i--)
	{
		printf("%d\t", stack[i]);
	}
}
void main()
{
	int c,d;
	do
	{
		printf("\nEnter your choice \n1.Push\n2.Pop\n3.Top\n4.Display\n");
		scanf("%d", &c);
		switch(c)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: top();
			break;
			case 4: display();
		}
		printf("\nDo you  want to continue(0/1)?\n");
		scanf("%d",&d);
	}while(d!=0);
}
