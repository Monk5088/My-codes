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
      nd* front=(*frref);
      nd* rear=(*reref);
	if(front==NULL&&rear==NULL){
	front=rear=temp;
	return;
     }
   rear->next=temp;
   rear=temp;  	
}
void dequeue(nd** frref,nd** reref)
{  
nd* front=(*frref);
nd* rear=(*reref);
nd* temp=(*frref);
if(front==NULL)
{
	printf("underflow\n");
	return;
}
if(front==rear)
{
	front=rear=NULL;
	return;
}
	front=front->next;
	free(temp);
	printf("%d dequeued\n",temp->d);

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
printf("dequeuing");
dequeue(&front,&rear);
printqueue(front);
}
