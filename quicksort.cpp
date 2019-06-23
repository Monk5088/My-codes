#include<stdio.h>
int partition(int a[],int low,int high)
{ int i,j,x,temp;
x=a[high];
for(i=low,j=low;i<high;i++)
{
if(a[i]<=x)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
j++;
}
}
temp=a[j];
a[j]=a[high];
a[high]=temp;	
return j;
}
void quicksort(int a[],int low,int high)
{   
	if(low<high)
	{
		int p=partition(a,low,high);
		quicksort(a,low,p-1);
		quicksort(a,p+1,high);
	}
}
int main()
{
	int n;
	printf("Enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter elements of array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("Sorted array is \n");
	for(int i=0;i<n;i++)
	printf("%d \t",a[i]);
	
}
