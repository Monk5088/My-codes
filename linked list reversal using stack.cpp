#include<stack>
#include<stdio.h>
#include<stdlib.h>
struct node{
	int d;
	struct node* next;
};
typedef struct node nd;
struct snode{
	nd* ndptr;
	struct snode* next;
};
typedef struct snode sd;
void push(snode **top,nd* val)
{
	sd* newnode=(sd*)malloc(sizeof(sd));
	newnode->ndptr=val;
	newnode->next=(*top);
	(*top)=newnode;
}
void pop(snode **top)
{ if((*top)==NULL){printf("Stack is empty\n");
return;
}
  sd* temp=(*top);
  (*top)=(*top)->next;
  free(temp); 
}
bool empty(sd* top)
{if(top==NULL)
return true;
else return false;
}
nd* tops(sd* top)
{
   if(top==NULL)
   {printf("stack is empty");
   return NULL;
   }
   return (top->ndptr);
}
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
void deletenode(nd **ptr,int ndata)
{    nd* temp=*ptr;
     nd* prev;
     if(temp==NULL){printf("error\n");return;
	 }
	if(temp->d==ndata){
	*ptr=temp->next;
	free(temp);
	return;
 }
    	while(temp->d!=ndata&&temp!=NULL)
    	{prev=temp;
    	temp=temp->next;
        }
 if(temp==NULL)
 return;
 prev->next=temp->next;
 free(temp);
	
}
void printlist(nd* mov)
{
	if(mov==NULL){
		printf("empty list \n");
		return;
	}
	while(mov)
	{
	printf("%d\n",mov->d);
	mov=mov->next;
    } 
}
void reverse(nd** head)
{nd* temp=(*head);
sd* top=NULL;
while(temp!=NULL)
{push(&top,temp);
temp=temp->next;
}
temp=tops(top);
(*head)=temp;
pop(&top);
while(!empty(top)){
	temp->next=tops(top);
	pop(&top);
	temp=temp->next;	
}
temp->next=NULL;
}
int main()
{
	nd* head=NULL;
	insert(&head,1);
	insert(&head,3);
	insert(&head,12);
	insert(&head,8);
	printlist(head);
	reverse(&head);
	printf("after reversing linked list\n");
	printlist(head);
}
	
