#include<stdio.h>
#include<string.h>
void swap(char *a,char*b)
{char temp;
temp=*a;
*a=*b;
*b=temp;
}
static long long int count=0;
void permutation(char* ch,int first,int last)
{   
	if(first==last)
	{count++;
	printf("%s\n",ch);
	return;
	}
	for(int i=first;i<=last;i++)
	{
		swap((ch+first),(ch+i));
		permutation(ch,first+1,last);
		swap((ch+first),(ch+i));
	}
}
int main()
{
	char string[20];
	printf("enter string\n");
	gets(string);
	printf("Permutations of strings are \n");
	int i=0;
	while(string[i]!=NULL)
	i++;
	permutation(string,0,i-1);
	printf("total permutations are %d",count);	
}
