#include<stdio.h>
#include<string.h>
void strcatn(char* d,char* src)
{
	int length1=0;int i;int j=0;int length2=0;
	while(d[length1]!=NULL)
	length1++;

	while(src[length2]!=NULL)
	length2++;
	
	i=length1;
	while(src[j]!=NULL)
	d[i++]=src[j++];
	d[length1+length2]='\0';
	
}
int main()
{  
    char src[100],d[100];
	printf("enter string s1\n");
	gets(src);
	printf("enter string s2\n");
	gets(d);
	strcatn(d,src);
	printf("string1 after catenation is %s\n",src);
	printf("string2 after catenation is %s\n",d);
	
	
}
