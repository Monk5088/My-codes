#include<stdio.h>
#include<stdlib.h>
struct btnode{
	int d;
	struct btnode* l;
	struct btnode* r;
};
typedef struct btnode btnode;
struct qnd{
	btnode* nd;
	struct qnd* next;	
};
typedef struct qnd qnd;
void enqueue(qnd** frref,qnd** reref,btnode* data)
{
qnd* newnode=(qnd*)malloc(sizeof(qnd));
newnode->nd=data;
newnode->next=NULL;
if((*frref)==NULL&&(*reref)==NULL)
{
(*frref)=(*reref)=newnode;
return;
}
(*reref)->next=newnode;
(*reref)=newnode;	
}
void dequeue(qnd** frref,qnd** reref)
{   qnd* temp=(*frref);
	if((*frref)==NULL)
	{printf("queue is empty");return;
	}
	else if((*frref)==(*reref))
	{
		(*frref)=(*reref)=NULL;
		free(temp);
		return;
	}
	(*frref)=(*frref)->next;
	free(temp);
}
bool isempty(qnd* frref)
{
	if(frref==NULL)return true;
	else return false;
}
btnode* insert(int data,btnode* rtref)
{
	btnode* newnode=(btnode*)malloc(sizeof(btnode));
	newnode->d=data;
	newnode->l=newnode->r=NULL;
	if(rtref==NULL)
	rtref=newnode;
	else if(rtref->d>=data)
	rtref->l=insert(data,rtref->l);
	else 
	rtref->r=insert(data,rtref->r);
	return rtref;	
}
void BFStrvsl(btnode* root)
{
	qnd* front=NULL;
	qnd* rear=NULL;
		if(root==NULL)
	{printf("error:no tree found\n");
	return;
	}
    enqueue(&front,&rear,root);
    while(!isempty(front))
    {
    	btnode* current=front->nd;
    	printf("%d ",current->d);
    	if(current->l!=NULL)enqueue(&front,&rear,current->l);
    	if(current->r!=NULL)enqueue(&front,&rear,current->r);
    	dequeue(&front,&rear);
	}
	
}
void printInO(btnode* mov)
{   if(mov==NULL)
	return;
printInO(mov->l);
printf("%d \t",mov->d);
printInO(mov->r);
	
}
int main()
{   int n;
	btnode* root=NULL;
	printf("Enter no of nodes to be inserted\n");
	scanf("%d",&n);
	printf("Enter nodes\n");
	for(int i=0;i<n;i++)
	{
		int d;
		scanf("%d",&d);
		root=insert(d,root);
	}
	printf("Inorder traversal of tree is\n");
	printInO(root);
	printf("\nBFS traversal of tree is\n");
    BFStrvsl(root);
}
