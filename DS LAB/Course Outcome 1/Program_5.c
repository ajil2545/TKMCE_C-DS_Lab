//Linkedlist(Creation,Insertion,Deletion)
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*header,*temp,*newnode,*ptr,*preptr;
void ins_begin();
void ins_intermmediate();
void ins_end();
void del_begin();
void del_intermmediate();
void del_end();
void display();
void main()
{
	int c=1,option;
	header=(struct node*)malloc(sizeof(struct node));
	header->link=NULL;
	while(c!=0)
	{
		printf("\n**** Main Menu ****\n");
		printf("1. Insert at begining\n");
		printf("2. Insert after a node\n");
		printf("3. Insert at end\n");
		printf("4. Delete from begining\n");
		printf("5. Delete after a node\n");
		printf("6. Delete from end\n");
		printf("7. Display list\n");
		printf("Enter your option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:ins_begin();
			break;
			case 2:ins_intermmediate();
			break;
			case 3:ins_end();
			break;
			case 4:del_begin();
			break;
			case 5:del_intermmediate();
			break;
			case 6:del_end();
			break;
			case 7:display();
			break;
			default:printf("Invalid Operator");
		}
		printf("Do you want to continue(0/1) : ");
		scanf("%d",&c);
	}
}
void ins_begin()
{
	int val;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&val);
	newnode->data=val;
	newnode->link=header->link;
	header->link=newnode;
}
void ins_intermmediate()
{
	int dat,val;
	ptr=header;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data of the node after the new node has to be placed : ");
	scanf("%d",&dat);
	printf("Enter the data of the new node : ");
	scanf("%d",&val);
	while(ptr->link!=NULL)
	{
		if(ptr->data==dat)
		{
			break;
		}
		else
		{
			ptr=ptr->link;
		}
	}
	newnode->data=val;
	newnode->link=ptr->link;
	ptr->link=newnode;
}
void ins_end()
{
	int val;
	ptr=header;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data of the new node : ");
	scanf("%d",&val);
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	newnode->data=val;
	newnode->link=ptr->link;
	ptr->link=newnode;
}
void del_begin()
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
		free(ptr);
	}
}
void del_intermmediate()
{
	int val;
	ptr=header;
	if(header->link==NULL)
	{
		printf("\nUnderflow\n");
	}
	else
	{
		printf("Enter the data of the node after which the node has to be deleted : ");
		scanf("%d",&val);
		while(ptr->data!=val)
		{
			preptr=ptr;
			ptr=ptr->link;
		}
		preptr=ptr;
		ptr=ptr->link;
		preptr->link=ptr->link;
		printf("Data of node deleted : %d\n",ptr->data);
		free(ptr);
	}
}
void del_end()
{
	ptr=header;
	if(header->link==NULL)
	{
		printf("\nUnderflow\n");
	}
	else
	{
		while(ptr->link!=NULL)
		{
			preptr=ptr;
			ptr=ptr->link;
		}
		preptr->link=ptr->link;
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
