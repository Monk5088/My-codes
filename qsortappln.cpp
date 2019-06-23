#include<stdio.h>
int partition(char a[],int low,int high)
{
	int i,j,x;
	char temp;
	x=a[high];
	j=low;
	for(int i=low;i<high;i++)
	{
		if(a[i]<=x)
		{
	    
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		    j++;
		}
	}
	temp=a[high];
	a[high]=a[j];
	a[j]=temp;
	return j;
}
void qsort(char a[],int low,int high)
{
	if(low<high)
	{
		int p=partition(a,low,high);
		qsort(a,low,p-1);
		qsort(a,p+1,high);
	}
}
int main()
{
	int n;
	printf("Enter no. of char\n");
	scanf("%d",&n);
	char ch[n+1];
	printf("enter char R&G\n");
	for(int i=0;i<n+1;i++)
	scanf("%c",&ch[i]);
	qsort(ch,0,n);
	printf("After partitioning in equal parts\n");
	for(int i=0;i<n+1;i++)
	printf("%c ",ch[i]);
}

