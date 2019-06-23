#include<stdio.h>
#include<string.h>
void reverse(char *A,int s,int n)
{
int i,j;i=s;j=n;
char temp;
while(i<j)
{
	char temp=A[i];
	A[i]=A[j];
	A[j]=temp;
	i++;
	j--;
}
}

void reverseS(char *a)
{ int i,j,length=0;
  while(a[length]!=NULL)
length++;
if(length==0){
printf("null string\n");
return ;
}
for(i=0,j=0;i<length;i++)
{	 
if(a[i]==' '){
reverse(a,j,i-1);
j=i+1;
}
else if(i==length-1)
{
	reverse(a,j,i);
}
}
}

int main()
{
	char st[100];
	printf("Enter a string\n");
	gets(st);
	reverseS(st);
	printf("%s",st);
}
