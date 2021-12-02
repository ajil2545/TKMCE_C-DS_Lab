//Queue Operation
#include<stdio.h>
#define n 5
int queue[n],front=-1,rear=-1;
void enqueue();
void dequeue();
void peak();
void display();
void main()
{
	int option,val=1;
	while(val==1)
	{
	printf("Enter your choice:\n1.Enqueue\n2.Dequeue\n3.Peak\n4.Display\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1 : enqueue();
		break;
		case 2 : dequeue();
		break;
		case 3 : peak();
		break;
		case 4 : display();
		break;
		default : printf("Invalid entry");
	}
	printf("\nDo you want to continue(0/1)?\n");
	scanf("%d",&val);
	}
}
void enqueue()
{
	int num;
	printf("Enter an element to enqueue\n");
	scanf("%d",&num);
	if(rear==n-1)
	 {
	printf("\nOverflow\n");
	//return;
	 }
	else if(front==-1 && rear==-1)
	 {
	front=rear=0;
	 }
	else
	 {
	rear++;
	 }
	queue[rear]=num;
}

void dequeue()
{
	if(front==-1 || front>rear)
	{
		printf("\nUnderflow\n");
	}
	else
	{
		printf("Dequeued element is %d",queue[front]);
		front++;
		if(front>rear)
		{
			front=rear=-1;
		}
	}
}
void peak()
{
	if(front==-1 || front>rear)
	{
		printf("\nUnderflow\n");
	}
	else
	{
		printf("Peak element is %d",queue[front]);
	}
}
void display()
{
	if(front==-1 || front>rear)
	{
		printf("\nUnderflow\n");
	}
	else
	{
		printf("Queue elements are\n");
		for(int i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
	 	}
	}
}
