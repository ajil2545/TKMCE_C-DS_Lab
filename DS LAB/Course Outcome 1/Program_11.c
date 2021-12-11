//Binary tree
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node * createtree()
{
	int item;
	struct node *temp;
	temp= (struct node *)(malloc(sizeof(struct node)));
	printf("Enter the data,if there is no data to be added enter 0 instead");
	scanf("%d",&item);
	if(item==0)
	{
		return NULL;
	}	
	temp->data=item;
	printf("Enter the left child of %d\n",temp->data);
	temp->left=createtree();
	printf("Enter the right child of %d\n",temp->data);
	temp->right=createtree();
	return temp;
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
void main()
{
	
	struct node *root;
	root=createtree();
	printf("\nPreorder traversal of binary tree :\n");
	preorder(root);
	printf("\nInorder traversal of binary tree :\n");
	inorder(root);
	printf("\nPostorder traversal of binary tree :\n");
	postorder(root);
}
