#include<stdio.h>
void swap(int &x,int &y)
{
  int t;
  t=x;
  x=y;
  y=t;
}
int main()
{
	int a,b;
	a=3;b=8;
	swap(a,b+5);
	printf("%d %d",a,b);
}
