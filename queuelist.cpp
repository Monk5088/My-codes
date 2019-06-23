#include<stdio.h>
#include<stdlib.h>
struct node{
	int d;
	struct node* next;
};
typedef struct node nd;
void enqueue(nd** frref,nd** reref,int data)
{    nd* temp=(nd*)(malloc(sizeof(nd)));
      temp->d=data;
      temp->next=NULL;
	if((*frref)==NULL&&(*reref)==NULL){
	(*frref)=(*reref)=temp;
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
if((*frref)==(*reref))
{
	(*frref)=(*reref)=NULL;
	return;
}
	(*frref)=(*frref)->next;
	printf("%d dequeued\n",temp->d);
    free(temp);
}
void printqueue(nd* mov)
{  
if(mov==NULL)
{
	printf("empty queue\n");
	return;
}
while(mov!=NULL)
   {
   	printf("%d \n",mov->d);
   	mov=mov->next;
   }
}
int main()
{ nd* front=NULL;
nd* rear=NULL;
enqueue(&front,&rear,3);
enqueue(&front,&rear,8);
enqueue(&front,&rear,18);
enqueue(&front,&rear,10);
printqueue(front);
printf("dequeuing\n");
dequeue(&front,&rear);
printqueue(front);
}
