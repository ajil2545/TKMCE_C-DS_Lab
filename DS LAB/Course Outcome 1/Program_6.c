//LinkedStack
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*header,*temp,*newnode,*ptr,*preptr;
void push);
void pop();
void display();
void main()
{
	int c=1,option;
	header=(struct node*)malloc(sizeof(struct node));
	header->link=NULL;
	while(c!=0)
	{
		printf("\n**** Main Menu ****\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display list\n");
		printf("Enter your option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			default:printf("Invalid Operator");
		}
		printf("Do you want to continue(0/1) : ");
		scanf("%d",&c);
	}
}
void push()
{
	int val;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&val);
	newnode->data=val;
	newnode->link=header->link;
	header->link=newnode;
}
void pop)
{
	ptr=header;
	if(header->link==NULL)
	{
		printf("\nUnderflow\n");
	}
	else
	{
		ptr=ptr->link;
		header->link=ptr->link;
		printf("Data of node deleted : %d\n",ptr->data);
		free(ptr);
	}
}
void display()
{
	temp=header;
	if(header->link==NULL)
	{
		printf("\nUnderflow\n");
	}
	while(temp->link!=NULL)
	{
		temp=temp->link;
		printf("%d\t",temp->data);
	}
	printf("\n");
}
