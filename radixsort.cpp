#include<stdio.h>
#include<math.h>
void countsort(int* a,int n,int d)
{    int k=a[0];
	for(int i=0;i<n;i++)
	if(a[i]>k)
	k=a[i];
	int count[k+1];
	for(int i=0;i<=9;i++)
	count[a[i]]++;
	for(int i=1;i<=9;i++)
	count[i]+=count[i-1];
	for(int i=n-1;i>=0;i--)
	b[count[a[i]]--]=a[i];
    return b;	
    for(int i=0;i<n;i++)
    a[i]=b[i+1];
}
int nod(int k)
{    int d;
	while(k!=0)
	{ d++;
	k=k/10;		
	}
	return d;
}
void radixsort()
{int k=a[0];int d;
	for(int i=0;i<n;i++)
	if(a[i]>k)
	k=a[i];
	d=nod(k);
	
}
int main()
{
	int n;
	printf("enter size of array \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array");
	for(int i=0;i<n;i++)
	{
      scanf("%d",&a[i]);
	}
	printf("sorted array is \n");
	for(int i=1;i<n;i++)
	{
		printf("%d",b[i]);
	}
	free(b);
}
