#include<stdio.h>
#include<stdlib.h>
struct node{
	int d;
	struct node* next;
};
typedef struct node nd;
nd* head=NULL;

void insert(nd **ptr,int ndata)
{   nd* newnode=(nd*)(malloc(sizeof(nd)));
    newnode->d=ndata;
    newnode->next=NULL;
	if (*ptr==NULL)
{		*ptr=newnode;
	}		
    else
    {nd* temp=*ptr;
    	while(temp->next!=NULL)
    	temp=temp->next;
    	temp->next=newnode;
	}
}
void reverse(nd* p)
{if(p==NULL)
{
	printf("list is empty");
	return;
}
if(p->next==NULL)
{
	head=p;
	return;
}
reverse((p->next));
nd* temp=p->next;
temp->next=p;
p->next=NULL;
}
void printlist(nd* mov)
{
	if(mov==NULL)
	{printf("Empty list");
	return;
	}
	while(mov!=NULL)
	{printf("%d \t",mov->d);
	mov=mov->next;
	}
}
int main()
{
	insert(&head,1);
	insert(&head,4);
	insert(&head,8);
	insert(&head,10);
	insert(&head,15);
	printf("The list is \n");
	printlist(head);
	reverse(head);
	printf("The reversed list is\n");
	printlist(head);
}
