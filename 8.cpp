#include<stdio.h>
int main()
{
	int r,c,count;
	printf("Enter rows and column of matrix\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("enter values for matrix\n");
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<r;i++)
	for(j=0;j<i;j++)
	{
		max=i;
		if(a[i]>a[max])
		max=i;
	}
    int a[]
}

