#include<stdio.h>
int main()
{   int a[100];int i,j;
	for(i=0;i<100;i++)
	a[i]=i;
	a[0]=0;
	a[1]=0;
	for(i=2;i<100;i++)
	{
		if(a[i]!=0)
		{
			for(j=2*i;j<100;j++)
			{
				if(a[j]%i==0)
				a[j]=0;
				else a[j]=j;
			}
		}
	}
	for(i=0;i<100;i++)
	{
		if(a[i]==i&&i!=0)
		printf("%d ",i);
	}
	return 0;
}

