#include<stdio.h>
int main()
{
	int n;
	printf("enter no\n");
	scanf("%d",&n);
	int log=0;
	for(int i=n;i/2!=0;i=i/2)
	log++;
	printf("floor of Log of %d in base 2 is %d",n,log);	
}
