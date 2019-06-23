#include<stdio.h>
int main()
{   int n;
	printf("Enter no");
	scanf("%d",&n);
	if(n==0)
	printf("%d has no factors",n);
	printf("%d has factors as\n",n);
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
	    printf("(%d,%d)\t",i,n/i);
	}
}
