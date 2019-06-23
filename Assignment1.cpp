#include<stdio.h>
int prime(int n);
int main()
{
	int b=0;
	printf("enter no to be checked");
	scanf("%d",&b);
	int p=prime(b);
	if(p==0)
	printf("%d is not prime",b);
	else if(p==1)
	printf("%d is prime ",b);
}
int prime(int n)
{
	for(int i=2;i<=n/2;i++)
	{
	if(n%i==0)
	{
		return 0;
	}
	
}
return 1;
}
