#include<stdio.h>
int main()
{
    int arr[6][6];
    printf("Enter elements\n");
    for(int i=0;i<6;i++)
    {
	for(int j=0;j<6;j++)
    scanf("%d",arr[i][j]);
    }
	int sum[16];
    int k=0;
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
            sum[k++]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
    int maxsum=sum[0];
    for(int i=1;i<16;i++)
      {
	   if(sum[i]>maxsum)
           maxsum=sum[i];
       }
    printf("%d",maxsum);
    return 0;
}
