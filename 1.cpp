#include<stdio.h>
#include<bits/stdc++.h>
int main()
{
	int gr1,gr2,gr3,n;
	printf("Enter no.(more than 3)\n");
	scanf("%d",&gr1);
	scanf("%d",&n);
	if(n>gr1){
	gr2=gr1;
	gr1=n; }
	else gr2=n;
	scanf("%d",&n);
	if(n>gr1){gr3=gr2;
	gr2=gr1;
	gr1=n;	
	}
	else if(n>gr2){
		gr3=gr2;
		gr2=n;
	}
	else gr3=n;

	while(n!=-1)
	{
		scanf("%d",&n);
		if(n==-1)
		break;
        if(n>gr1){gr3=gr2;
        gr2=gr1;
        gr1=n;
        }
        else if(n>gr2&&n<gr1){
        	gr3=gr2;
        	gr2=n;
		}
		else if(n>gr3&&n!=gr2)
		gr3=n;
	}
	printf("Third greatest no is %d\n",gr3);
}
