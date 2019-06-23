#include<stdio.h>
int main()

{
	int a[10],t,min;
	printf("enter int array ");
	for(int i= 0;i<10;i++)
	{         
		scanf("%d",&a[i]);
	}
	printf("array after sorting in non descending order");
	for(int i =0;i<10;i++)
	{
		min = i;
		for(int j=i+1;j<10;j++)
		{
			if(a[j]<a[min])
			min = j;
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
	for(int i=0;i<10;i++)
	{
		
		printf("%d ",a[i]);
	}
}
