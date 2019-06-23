#include<stdio.h>

int sum(int* A,int n)
{   static int i=0;static int s=0;
if(i<n)
		{s=A[i++]+sum(A++,n);
		
			return s;}
		else return A[n-1];

}
int main()
{   int n=0;
    int total=0;
	printf("Enter size of array ");
	scanf("%d",&n);
	int a[n];
	printf("enter elements of array\n ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	total=sum(a,n);	
	printf("The sum of array is %d",total);
	
}
