#include<stdio.h>
int n;
void percolatedown(int A[],int i)
{   
    int lc=2*i+1;
    if(lc>n)
    return ;
    int rc=2*i+2;
    if(rc>n)
    return ;
	if(A[lc]>A[i]){
		int temp=A[i];
		A[i]=A[lc];
		A[lc]=A[i];
		percolatedown(A,lc);
	}
	else if(A[rc]>A[i]){
		int temp=A[i];
		A[i]=A[rc];
		A[rc]=A[i];
		percolatedown(A,rc);
	}
	
}
void maxheap(int A[],int n)
{   printf("HI");
    for(int i=(n/2)-1;i>=0;i--)
    {
    	percolatedown(A,i);
	}
}
int main(){
	printf("Enter no of nodes\n");
	scanf("%d",&n);
	printf("Enter nodes of heap\n");
	int A[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	maxheap(A,n);
	printf("Maxheap -->\n");
	for(int i=0;i<n;i++)
	printf("%d\t",A[i]);
	
}

