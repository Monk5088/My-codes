#include<stdio.h>
#include<string.h>
void reverse(char* c,int start,int end)
{
	if(c==NULL)
	{printf("string is empty\n");
	return;
	}
	if(start<end)
	{ 	char temp=c[start];
		c[start]=c[end];
		c[end]=temp;
		reverse(c,++start,--end);
	}
	else return;
}
int main()
{    char ch[20];
    printf("Enter string\n");
	gets(ch);
	int l=strlen(ch);
	reverse(ch,0,l);
    printf("reversed string is\n");
    int i=0;
    while(i<=l)
    {
	printf("%c",ch[i]);
	i++;
}
}

