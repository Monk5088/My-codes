#include<stdio.h>
void Ins_sort(int* A,int n)
{
	int temp,j,tmp;
for(int i=1;i<n;i++)
{    temp=A[i];
     tmp=i;
	for(j=i-1;j>=0;j--,tmp--)
	{
		if(temp<A[j])
		A[tmp]=A[j];
		else 
		{
			A[tmp]=temp;
			break;
        }
        A[j]=temp;
    }
} 
}
int main()
{
	int n,i;
	printf("enter size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array\n");
	for(i=0;i<n;i++)
	{printf("\0");
		scanf("%d",&a[i]);
	}
	Ins_sort(a,n);
	for(int i=0;i<n;i++)
	printf("\n%d",a[i]);
}


