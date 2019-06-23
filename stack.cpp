#include<stdio.h>
#include<stdlib.h>
struct stacknode{
	int d;
	struct stacknode* next;
};
typedef struct stacknode sd;
void push(sd **ptr,int sdata)
{   sd* newnode=(sd*)(malloc(sizeof(sd)));
    newnode->d=sdata;
    if(*ptr==NULL)
    {
	*ptr=newnode;
	newnode->next=NULL;
}   
    else
    {
	
	newnode->next=*ptr;
    *ptr=newnode;
	}
}
int pop(sd **ptr)
{
	sd* temp;int t;
	temp=*ptr;
	if(temp==NULL)
	{printf("underflow");
	return 0;
	}
	*ptr=temp->next;
	t=temp->d;
	free(temp);
	return t;
}
void deletenode(sd **ptr,int sdata)
{    sd* temp=*ptr;
     sd* prev;
     if(temp==NULL){printf("error\n");return;
	 }
	if(temp->d==sdata){
	*ptr=temp->next;
	free(temp);
	return;
 }
    	while(temp->d!=sdata&&temp!=NULL)
    	{prev=temp;
    	temp=temp->next;
        }
 if(temp==NULL)
 return;
 prev->next=temp->next;
 free(temp);
	
}
void printlist(sd* mov)
{
	if(mov==NULL){
		printf("empty list \n");
		return;
	}
	while(mov!=NULL)
	{
	printf("%d\n",mov->d);
	mov=mov->next;
    } 
}
int main()
{
	sd* top=NULL;
	push(&top,1);
	push(&top,3);
	push(&top,12);
	push(&top,8);
	printlist(top);
	printf("\n %d Popped\n",pop(&top));
	printlist(top);		
}
