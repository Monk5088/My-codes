#include<stdio.h>
void countsort(int* a,int n)
{   int k=a[0];
	for(int i=0;i<n;i++)
	{if(a[i]>k)
	k=a[i];
	}
	int count[k+1]={0};
	int b[n];
	for(int i=0;i<n;i++)
	count[a[i]]++;
	for(int i=1;i<=k;i++)
	count[i]+=count[i-1];
	for(int i=n-1;i>=0;i--)
	{b[count[(a[i])]]=a[i];
	count[a[i]]--;
	}
	for(int i=0;i<n;i++)
    a[i]=b[i+1];
}
int main()
{int n;
 printf("Enter size of array");
 scanf("%d",&n);
 int a[n];
 printf("Enter elements of array");
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 countsort(a,n);
 printf("sorted array is \n");
 for(int i=0;i<n;i++)
 	printf("%d\t",a[i]);
 }
