#include<stdio.h>
int A[20];
int front,rear;
front=rear=-1;
bool isfull()
{
	if((rear+1)%20==front)
	return true;
	else return false;
}
bool isempty()
{
	if(rear==-1&&front==-1)
	return true;
	else return false;
}
void enqueue(int x)
{
	if(isfull())
	{printf("overflow");
	return;
	}
	else if(isempty())
	{front=rear=0;
	}
	else{
		front=
		
	}
	
}

