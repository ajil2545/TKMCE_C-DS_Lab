//Operation with binary search tree
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int n,i,item;
struct node *p,*q,*root;
/*inoredersuccessor(struct node *t)
{
	if(t->right!=NULL)
	{
		temp=p->right;
		while(temp->left!=NULL)
		{
			temp=temp->left;
			printf("%d",temp->data);
		}
	}
	else
	{
		r=root;
while(r->data<=r->data);
	}
}*/
void createbst()
{
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the node\n");
		scanf("%d",&item);
		p=(struct node *)(malloc(sizeof(struct node)));
		p->data=item;
		p->left=NULL;
		p->right=NULL;
		if(i==0)
		{
			root=p;
		}
		else
		{
			q=root;
			while(1)
			{
		
				if(p->data > q->data)
				{
					if(q->right==NULL)
					{
						q->right=p;
						break;
					}
					else
					{
						q=q->right;
					}	
				}
				else
				{
					if(q->left==NULL)
					{
						q->left=p;
						break;
					}
					else
					{
						q=q->left;
					}
				}
			}
		}
	}
}
void preorder(struct node *t)
{
	if(t!=NULL)
	{
		printf("%d\t",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}
void inorder(struct node *t)
{
	if(t!=NULL)
	{
		inorder(t->left);
		printf("%d\t",t->data);
		inorder(t->right);
	}
}
void postorder(struct node *t)
{
	if(t!=NULL)
	{
		
		postorder(t->left);
		postorder(t->right);
		printf("%d\t",t->data);
	}
}
void minimum(struct node *t)
{
	printf("\n Minimum value : ");
	while(t->left!=NULL)
	{
		t=t->left;
	}
	printf("%d",t->data);
}
void maximum(struct node *t)
{
	printf("\n Maximum value : ");
	while(t->right!=NULL)
	{
		t=t->right;
	}
	printf("%d",t->data);
}
void main()
{
	int c=1,option;
	printf("\n**** Binary Search Tree Operation****\n");
	while(c==1)
	{
		printf("\n**** Main Menu ****\n");
		printf("1. Create BST\n");
		printf("2. Preorder\n");
		printf("3. Inorder\n");
		printf("3. Postorder\n");
		printf("4. Minimum value\n");
		printf("4. Maximum value\n");
	    	printf("\nEnter your option : ");
	    	scanf("%d",&option);
		switch(option)
		{
			case 1:createbst();
				break;
			case 2:preorder(root);
				break;
			case 3:inorder(root);
				break;
			case 4:postorder(root);
				break;
			case 5:minimum(root);
				break;
			case 6:maximum(root);
				break;
			default:printf("\nInvalid Option");
		}
		printf("\nDo you want to continue(0/1) : ");
		scanf("%d",&c);
	}
}
