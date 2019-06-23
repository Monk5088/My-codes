#include<stdio.h>
int main()
{
	int size=0;
	int max=0;
	printf("enter size of array");
	scanf("%d",&size);
	int a[size];
	int counter[size];
	printf("enter values in an array");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(int i=0;i<size;i++)
    
    	if(a[i]>max)
    	max=a[i];
	int freq[max];
	for(int i=0;i<=max;i++)
	freq[i]=0;
	for(int i=0;i<=max;i++)
	freq[a[i]]++;
	printf("Duplicate elements are ");
	for(int i=0;i<=max;i++)
	{
	if(freq[i]>1 )
	printf("%d ",i);
}
}
