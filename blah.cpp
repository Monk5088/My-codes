#include<stdio.h>
#include<string.h>
int main() {
    int t,i;
    scanf("%d",&t);
    char ch[10][1000];
    i=1;
    for(i=1;i<=t;i++)
    {scanf("%s",&ch[i]);
    }
    for(i=1;i<=t;i++)
    {
        { for(int j=0;j<strlen(ch[i]);j=j+2)
          printf("%c",ch[i][j]);
          printf(" ");
          for(int j=1;j<strlen(ch[i]);j=j+2)
          printf("%c",ch[i][j]);
         }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
}
