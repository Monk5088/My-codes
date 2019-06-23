#include<stdio.h>

int main()
{
	float int_amt,rate,fin_amt;
	int yr;
	fin_amt=0;
	int_amt=1000.0;
	rate=5;
	for(yr=1;yr<=10;yr++)
	{int_amt=int_amt*(1+rate);
		fin_amt=fin_amt+int_amt;
		printf("On %d year, Money in account is %f\n ",yr,fin_amt);
	}
	
	return 0;
	
}
