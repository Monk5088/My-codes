#include<stdio.h>

int main()
{  FILE *fpin,*fpout;
    char a[100];
    fpin=fopen("C:\MYFILE.txt","r");
    fpout=fopen("C:\MYFILE.txt","w");
    if(fpin==NULL)
    {printf("File is empty");
    return 0;
	}
    while(fgets(a,100,fpin));
    int i=0;
    while(a[i]!=NULL)
    {
    	if((a[i]>='a')&&(a[i]<='z'))
    	a[i]=a[i]-('A'-'a');
	}
//	fputs()
}
