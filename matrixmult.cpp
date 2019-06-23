#include<stdio.h>

int main()
{int m1,n1,m2,n2,t;
 printf("Enter size row,column for matrix 1");
 scanf("%d %d",&m1,&n1);
 printf("Enter size row,column for matrix 2");
 scanf("%d %d",&m2,&n2);
 int mat1[m1][n1];
 int mat2[m2][n2];
 printf("enter values of matrix 1");
 for(int i=0;i<m1;i++)
 {
 	for(int j=0;j<n1;j++)
 	{
 		scanf("%d",&mat1[i][j]);
	 }
 }
 printf("enter values of matrix 2");
 for(int i=0;i<m2;i++)
 {
 	for(int j=0;j<n2;j++)
 	{
 		scanf("%d",&mat2[i][j]);
	 }
 }
 int mult_mat[m1][n2];
 mult_mat[0][0]=0;
  for(int i=0;i<m1;i++)
 {for(int j=0;j<n2;j++)
 {
 t=mat1[i][j]*mat2[j][i];
 mult_mat[i][j]=t+mult_mat[i][j];
 }
 
 }
 for(int i=0;i<m1;i++)
 {
 	for(int j=0;j<m2;j++)
 	{
 		printf("%d ",mult_mat[i][j]);
	 }
	 printf("/n");
 }
 
}
