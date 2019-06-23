#include<stdio.h>
#include<stdlib.h>
struct node{
	int d;
	struct node* l;
	struct node* r;
};
typedef struct node node;
struct qnode{
	node* nd;
	struct qnode* next;
};
typedef struct qnode qnode;
qnode* front=NULL;
qnode* rear=NULL;
void enqueue(node* nd)
{    qnode* newnode=(qnode*)malloc(sizeof(qnode));
	if(front==NULL&&rear==NULL)
	{
	front=rear=newnode;
	return;
}
rear->next=newnode;
rear=newnode;   
}
void dequeue()
{
	qnode* temp=front;
	if(front==NULL)
	{
	printf("queue is empty");return;
}
	else if(front==rear)
	{
	front=NULL;
	rear=NULL;
	free(temp);
	return;
}
front=front->next;
free(temp);
}
node* insert(int data,node* root)
{
	node* newnode=(node*)(malloc(sizeof(node)));
	newnode->d=data;
	newnode->l=newnode->r=NULL;
	if(root==NULL)
	root=newnode;
	else if(root->d>=data)
	root->l=insert(data,root->l);
	else 
	root->r=insert(data,root->r);
	return root;
}
void levelorder(node* root)
{if(root==NULL)
return;
printf("%d\t",root->d);
levelorder(root->l);
levelorder(root->r);
}
void inorder(node* root)
{
	if(root==NULL)
	return;
	inorder(root->l);
	printf("%d\t",root->d);
	inorder(root->r);
}
void preorder(node* root)
{   
	if(root==NULL)
	return;
	printf("%d\t",root->d);
	preorder(root->l);
	preorder(root->r);
}
void postorder(node* root)
{
	if(root==NULL)
	return;
	postorder(root->l);
	postorder(root->r);
	printf("%d\t",root->d);
}
int main()
{
	node* root=NULL;
	printf("Enter no of nodes\n");
	int n;
	scanf("%d",&n);
	int i=0;
	int d;
	printf("Enter nodes\n");
	while(i<n)
	{
	scanf("%d",&d);
	root=insert(d,root);
	i++;
	}
	printf("Level order traversal of tree is \n");
	levelorder(root);
	printf("Inorder traversal of tree is \n");	
	inorder(root);
	printf("\nPreorder traversal of tree is \n");
	preorder(root);
	printf("\nPostorder traversal of tree is \n");
	postorder(root);
}


