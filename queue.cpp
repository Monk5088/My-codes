#include<stdio.h>
#include<stdlib.h>
struct node{
	int d;
	struct node* next;
};
typedef struct node nd;
void enqueue(nd** frref,nd** reref,int data)
{
	nd* temp=(nd*)malloc(sizeof(nd*));
	temp->d=data;
	temp->next=NULL;
	if((*frref)==NULL&& (*reref)==NULL)
	{(*frref)= (*reref)=temp;
	return;
	}
	 (*reref)->next=temp;
	 (*reref)=temp;
}
void dequeue(nd** frref,nd** reref)
{
nd* temp=(*frref);
if((*frref)==NULL)
{
	printf("underflow\n");
	return;
}
if((*frref)== (*reref))
{
(*frref)= (*reref)=NULL;	
}
else (*frref)=(*frref)->next;
free(temp);	
}
void printqueue(nd* mov)
{
	if(mov==NULL)
	{
		printf("queue is empty");
	return;
	}
	printf("not empty");
	while(mov->next!=NULL)
	{   
		printf("%d\n",mov->d);
		mov=mov->next;
	}
}
int main()
{
	nd* front;
	nd* rear;
	front=rear=NULL;
	printqueue(front);
	enqueue(&front,&rear,10);
	enqueue(&front,&rear,23);
	enqueue(&front,&rear,96);
	enqueue(&front,&rear,56);
	printqueue(front);
	dequeue(&front,&rear);
	printf("Dequeuing\n");
	printqueue(front);
}
