#include<stdio.h>
 int main ()
 {
 	double e,t;
 	t=1;
 	e=1;
 	double x;
 	printf("enter x");
 	scanf("%lf",&x);
 	if(x==0)
 	{e=1;
	 }
 	else
	 {
	 for(int i=1;i<=10;i++)
 	{
 		
 	
 		t=t*x/i;
 		e=e+t;
 		
	 }
}
	 printf("Exponential of x = %lf",e);
	 return 0;
	 
 }
