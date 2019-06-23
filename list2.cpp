#include<stdio.h>
#include<stdlib.h>
struct node
{
	int d;
	struct node* next;
};
static int count=0;
typedef struct node nd;
void addnode(nd **href,int data)
{   count++;
    nd* newnode=(nd*)(malloc(sizeof(nd)));
    newnode->d=data;
    newnode->next=NULL;
	if (*href==NULL)
{		*href=newnode;
	}		
    else
    {nd* temp=*href;
    	while(temp->next!=NULL)
    	temp=temp->next;
    	temp->next=newnode;
	}
}
void insertn(nd** href,int data,int n)
{   
    if(n>count){printf("\nInsertion not possible");
    return;
	}
	count++;
	nd* newnode=new nd();
	newnode->d=data;
	newnode->next=NULL;
	nd* temp1;
	temp1=*href;
	if(*href==NULL)
	{
		*href=newnode;
		return;
	}
	if(n==1){newnode->next=*href;
	*href=newnode;	
	}
	else 
	{for(int i=1;i<=n-1;i++)
	temp1=temp1->next;
	newnode->next=temp1->next;
	temp1->next=newnode;	
	}
	
}
void deletenode(nd **href,int data)
{   nd *prev,*temp=*href;
	if((*href)==NULL)
	{printf("error underflow");
	return;
	}
	if(temp->d==data)
	{(*href)=temp->next;
	free(temp);
	return;
	}
	else{
	while(temp->d!=data)
	{prev=temp;
	temp=temp->next;
}prev->next=temp->next;
free(temp);	
}
}
void printlist(nd* cursor)
{
	if(cursor==NULL)
	{
		printf("no list");
	return;
}
else 
while(cursor!=NULL)
{
printf("%d\n",cursor->d);
cursor=cursor->next;
}
}
int main()
{
  nd* head=NULL;
    insertn(&head,0,1);
    printlist(head);
  	addnode(&head,1);
	addnode(&head,3);
	addnode(&head,12);
	addnode(&head,8);
	addnode(&head,70);
	printlist(head);
	deletenode(&head,3);
	printlist(head);
	insertn(&head,57,2);
	printlist(head);
	insertn(&head,88,5);
	printlist(head);
	insertn(&head,1,1);
	printlist(head);
	insertn(&head,45,6);
	printlist(head);
		
  	
}
