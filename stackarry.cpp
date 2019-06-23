#include<stdio.h>
#include<stdlib.h>
struct stack{
	int top,size;
	int *sptr;
};
typedef struct stack st;
bool isfull(st* s)
{
	if(((s->size)-1)==s->top)
	return true;
	else return false;
}
bool isempty(st* s)
{
	if(s->top==-1)
	return true;
	else return false;
}
void push(st* s,int data)
{
if(isfull(s)){
printf("overflow\n");
return;	
}
else{
	s->top+=1;
	s->sptr[s->top]=data;
}
}
int pop(st* s)
{   int val;
	if(isempty(s))
	{
		printf("underflow\n");
		return -1;
	}
	else{
		val=s->sptr[s->top];
		s->top-=1;
		return val;
	}
}
void printstack(st* s)
{   int mov=s->top;
	while(mov!=-1)
	{printf("%d\n",s->sptr[mov]);
	mov--;
	}
}
int main()
{    st s1;
	s1.top=-1;
	printf("enter size of stack \n");
	scanf("%d",&s1.size);
	s1.sptr=(int*)malloc(sizeof(int)*s1.size);
	push(&s1,10);
	push(&s1,20);
	push(&s1,30);
	push(&s1,80);
	printstack(&s1);
	printf("%d is popped\n",pop(&s1));
	printstack(&s1);
	printf("%d is popped\n",pop(&s1));
	printstack(&s1);
	free(s1.sptr);	
}
