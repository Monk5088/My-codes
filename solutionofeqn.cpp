#include<stdio.h>
#include<stdlib.h>
float* solution(float a1,float b1,float c1, float a2, float b2,float c2)
{
  float a[2];
 a[0]=(c1*b2-b1*c2)/(a1*b2-a2*b1);
 a[1]=(a1*c2-a2*c1)/(a1*b2-a2*b1);
return a;

}
int main()
{
	float a1,b1,c1,a2,b2,c2;
	float* soln;
	printf("enter coefficient of x,y & constant(for the form ax+by=c) for equation 1\n");
	scanf("%f %f %f",&a1,&b1,&c1);
    printf("enter coefficient of x,y & constant(for the form ax+by=c) for equation 2\n");
    scanf("%f %f %f",&a2,&b2,&c2);
    soln=solution(a1,b1,c1,a2,b2,c2);
    printf("the value of x = %f \nthe value of y = %f\n",soln[0],soln[1]);
    
	}
