#include<stdio.h>
#include<stdlib.h>
int n;
int magic(int,int,int**);
int main()
{
	int flag;
	flag=0;
	printf("Enter size of square matrix (NXN) \n");
	scanf(" %d",&n);
	int **a=(int**)(malloc(sizeof(int*)*n));
	printf("enter array elements\n");
	for(int i=0;i<n;i++)
	{
		a[i]=(int*)(malloc(sizeof(int)*n));
	}
	
	for(int i=0;i<n;i++)
	{   
		for(int j=0;j<n;j++)
		scanf("%d",a[n][n]);
	}
	flag=magic(n,n,a);
    if(flag==0)
    printf("Not a magic matrix");
    else
    printf("A magic matrix");
    free(a);
    return 0;
	}
	
		int magic(int n,int n2,int **A)
{       
        int rs[n],cs[n],pd[2];
        pd[0]=0;pd[1]=0;
		for(int i=0;i<n;i++)
	    {   rs[i]=0;cs[i]=0;
		    for(int j=0;j<n2;j++)
		    {
			rs[i]=rs[i]+A[i][j];
		    cs[i]=cs[i]+A[j][i];
		    if(i==j)
		    pd[0]=pd[0]+A[i][j];
		    if(i+j==n-1)
		    pd[1]=pd[1]+A[i][j];
	       }
	
       }
       if(pd[0]!=pd[1])
       return 0;
       for(int i=0;i<n;i++)
       if((cs[i]!=rs[i])||pd[0]!=cs[i])
        return 0;
       return 1;	
}
	
	

