#include<stdio.h>
#include<stdlib.h>
struct trees
{
	struct tress *left;
	int data;
	struct trees *right;
};
struct trees *create()
{
	struct trees *newnode=0;
	int a;
	printf("\nEnter data (-1 for no nodes):");
	scanf("%d",&a);
	if(a==-1)
	{
		return 0;
	}
	newnode=(struct trees*)malloc(sizeof(struct trees));
	newnode->data=a;
	printf("\nEnter left child of %d",a);
	newnode->left=create();
	printf("\nEnter right child of %d",a);
	newnode->right=create();
	return newnode;
}
int main()
{
	struct trees *root;
	root=create();
	printf("\nPreorder Evaluation is:");
	preorder(root);
	printf("\nInorder Evaluation is:");
    inorder(root);
    printf("\nPostorder Evaluation is:");
    postorder(root);
    return 0;
}
void preorder(struct trees*root)
{
	if(root==NULL)
	{
		return;
	}
	printf("\t%d",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct trees *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("\t%d",root->data);
	inorder(root->right);
}
void postorder(struct trees *root)
{
	if(root==NULL)
	{
		return ;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d",root->data);
}
