#include<stdio.h>
#inlcude<stdlib.h>
#define Maxnodes 10
struct node{
	int data;
	struct node* next;
};
typedef struct node node;
node* array[Maxnodes];

int main()
{
	node* list1;
	node nd;
	nd.data=0;
	nd.next=NULL;
	list1=&nd;
	array[0]=list1;
	for(i=1;i<Maxnodes;i++)
	
	
}
