#include<stdio.h>
int main()
{
	int a[10]={1,4,6,7,25,34,36,45,67,77};
	int b[15]={3,5,6,15,16,18,29,36,56,66,69,73,76,77,89};
	printf("Intersection of array is\n")
	for(int i=0;i<10;i++)
	{
	for(int j=0;j<15;j++)
	{
		if(a[i]==b[j])
		printf("%d ",a[i]);
		break;
	}
	}
	printf("\nA-B of array is \n");
	for(int i=0;i<10;i++)
	{
	for(int j=0;j<15;j++)
	{
		if(a[i]==b[j])
		break;
		printf("%d ",a[i]);
	}
	}
	printf("\nUnion of array is\n");
	
	int i,j;
	i=j=0;
	while(i<10)
	{
		
	}
}
