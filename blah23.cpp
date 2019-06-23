#include<stdio.h>
int main()
{
	int n,sum,i,j;
	sum=0;
	printf("Enter n");
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
	for( j=i;j>0;j=j/2)
	{
	sum=sum+i+j;
}
    }
   	printf("The sum is %d",sum);
   	return 0;
}
