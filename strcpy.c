#include<stdio.h>
#include<string.h>
void strcopy(char* d,char* src)
{
	int length=0;int i;
	while(src[length]!=NULL)
	length++;
	for(i=0;i<length;i++)
	d[i]=src[i];
	d[length]='\0';
	
}
int main()
{   int i;
    char src[100],d[100];
	printf("enter string s1\n");
	gets(src);
	printf("enter string s2\n");
	gets(d);
	strcopy(d,src);
	printf("string1 after cpoying is %s\n",src);
	printf("string2 after copying is %s\n",d);
	
	
}
