#include<stdio.h>
#include<stdlib.h>
int n;
int magic(int,int**);
int main()
{
	int flag;
	flag=0;int i,j;
	printf("Enter size of square matrix (NXN) \n");
	scanf(" %d",&n);
	int **a=(int**)(malloc(sizeof(int*)*n));
	printf("enter array elements\n");
	for( i=0;i<n;i++)
	{
		a[i]=(int*)(malloc(sizeof(int)*n));
	}
	
	for( i=0;i<n;i++)
	{   
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	flag=magic(n,a);
    if(flag==0)
    printf("Not a magic matrix");
    else
    printf("A magic matrix");
    free(a);
	}
	
		int magic(int n,int **A)
{       int i,j,rs,cs,ds,ads;
        ds=ads=0;
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {if(i==j)
		    ds=ds+A[i][j];		    	
			if(n-i==j)
			ads=ads+A[i][j];
		}
		if(ads!=ds)
		return 0;
		for( i=0;i<n;i++)
	    {  rs=0;cs=0;
		    for( j=0;j<n;j++)
		    {
			rs=rs+A[i][j];
			cs=cs+A[j][i];
			if(rs!=cs||rs!=ds)
			return 0;
		}
}
  return 1;     	
}
	
	

