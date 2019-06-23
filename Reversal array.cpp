#include<stdio.h>
#include<stdlib.h>
void reverse(int *A,int n)
{int i,j,temp;
for(i=0,j=n-1;i<n/2;i++,j--)
{
temp=A[i];
A[i]=A[j];
A[j]=temp;
}
	
}
int main()
{int n=0;
printf("enter array size\n");
scanf("%d",&n);
int *a=(int*)(malloc(n*sizeof(int)));
printf("Enter array elements\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
reverse(a,n);
printf("Reverse array is\n");
for(int i=0;i<n;i++)
printf("%d \n",a[i]);
}

