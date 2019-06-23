#include<stdio.h>
#include<math.h>
int isprime(int n,int d)
{  
    if(d==1)
      return 1;
  else if(n%d==0)
	return 0;
	else isprime(n,d-1);
}

int main()
{ 
	int x,flag;
	printf("Enter a no\n");
	scanf("%d",&x);
	if(x==1)
	{printf("Neither prime nor composite\n");
	return 0;
    }
    int rt=sqrt(x);
	flag=isprime(x,rt);
	if(flag==1)
	printf("prime");
	else printf("Not prime");	
}
