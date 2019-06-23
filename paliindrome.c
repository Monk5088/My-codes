#include<stdio.h>
#include<string.h>
void palindrome(char *a)
{ int i,j,length=0;
  printf("\0");
while(a[length]!=NULL)
length++;
if(length==0){printf("null string\n");return ;
}
for(i=0,j=length-1;i<(length/2);i++,j--)
{if(a[i]!=a[j])
printf("not a palindrome\n");
break;
}
printf("a palindrome");
}
int main()
{
	char ch[100];
	printf("Enter a string\n");
	gets(ch);
	palindrome(ch);
	
}
