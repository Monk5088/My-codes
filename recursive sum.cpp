#include<stdio.h>
static int sum=0;
int loop2(int j)
{
	if(j<=0)
	return 0;
	else return j+loop2(j/2);
}
int loop1(int i)
{
	if(i==0)
	return 0;
	sum=i+loop2(i);
	return (sum+loop1(--i));
}
int main()
{

int n;
printf("Enter number\n");
scanf("%d",&n);
int sum=loop1(n);
printf("The sum is %d",sum);
}
