#include<stdio.h>
void reverse(int* a,int start,int end)
{   
	if(start<end)
	{
		int temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		reverse(a,++start,--end);
	}
	else return;
}
int main()
{   int n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("enter elements of array\n");
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	reverse(a,0,n-1);
	printf("Reversed array is \n");
	for(int i=0;i<n;i++)
	printf("%d\t",a[i]);
}
