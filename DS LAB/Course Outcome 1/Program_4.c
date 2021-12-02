//Linkedlist(creatrion,traversal,count,search)
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head,*newnode,*temp;
struct node *head=0;
int insert();
void traverse();
void search();
void main()
{
	int option,val=1;
	while(val==1)
	{
		printf("Enter your choice:\n1.Insert\n2.Display\n3.Search\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1 : insert();
			break;
			case 2 : traverse();
			break;
			case 3 : search();
			break;
			default : printf("Invalid entry");
		}
		printf("Do you want to continue(0/1)\n");
		scanf("%d",&val);
	}
}
int insert()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d", &newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
}
void traverse()
{
	temp=head;
	int count=0;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		count=count+1;
		temp=temp->next;
	}
		printf("\nNo of elements in the list : %d\n",count);
}
void search()
{
	int key, count=0;
	printf("Enter the element to search: \n");
	scanf("%d",&key);
	temp=head;
	while(temp!=0)
	{
		count=count+1;
		if(temp->data==key)
		{
			printf("\nThe element is in the position : %d \n",count);
			break;
		}
		else
		{
			temp=temp->next;
		}
	}
}
