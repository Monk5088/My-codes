#include<stdio.h>
int coprime(int m,int n)
{  int min=((m>n)?n:m);int gcd;
   for(int i=1;i<=min;i++)
   {
   	if(m%i==0&&n%i==0)
   	gcd=i;
   }
return gcd;
}
int main()
{
	int m,n;
	printf("Enter two nos\n");
	scanf("%d %d",&m,&n);
	if(coprime(m,n)==1)
	printf("%d and %d are co primes\n",m,n);
	else 
	printf("Not co-primes");
}
