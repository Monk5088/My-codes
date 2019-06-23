#include<stdio.h>
#include<stdlib.h>
struct btnode{
	int data;
	struct btnode* l;
	struct btnode* r;
};
typedef struct btnode bnode;
struct stacknode{
	bnode* bnd;
	struct stacknode* next;
	};
typedef struct stacknode snode;
snode* top;
void push(btnode* bnode)
{
	snode* newnode=(snode*)malloc(sizeof(snode));
	newnode->bnd=bnode;
	newnode->next=NULL;
	if(top==NULL)
	top=newnode;
	else
	{
		newnode->next=top;
		top=newnode;
	}
}
bnode* pop()
{   snode* temp=top;
    bnode* tempnd=top->bnd;
	if(top==NULL)
	{printf("Underflow\n");
	return NULL;
	}
	top=temp->next;
	free(temp);
	return tempnd;	
}
bnode* insert(int ndata,bnode* rtref)
{   bnode* newnode=(bnode*)malloc(sizeof(bnode));
    newnode->data=ndata;
    newnode->l=newnode->r=NULL;
	if(rtref==NULL)
	rtref=newnode;
	else if(rtref->data<=ndata)
	rtref->l=insert(ndata,rtref->l);
	else rtref->r=insert(ndata,rtref->r);
	return rtref;
}
void DFStrvsl(bnode* root)
{ 
	if(root==NULL)
	{
	printf("Tree is empty");
	return;
    }
    push(root);
	printf("DFS traversal of tree is\n");
	while(top)
	{bnode* current=top->bnd;
	 if(current)
	}
}

