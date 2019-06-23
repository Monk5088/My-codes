#include<stdio.h>
int main(){
	int n;
	printf("enter number n");
	scanf("%d",&n);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j>=0;j=j/2)
		sum+=i+j;
	}
	printf("\nthe sum is %d",sum);
}
