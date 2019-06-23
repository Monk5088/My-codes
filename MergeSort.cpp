 #include<stdio.h>
 void merge(int A[],int low,int mid,int high)
 {   int nl,nr;
 nl=mid-low+1;
 nr=high-mid;
 int l[nl],r[nr];
 int i,j,k;
 i=0;j=0;
 while(i<nl)
 {
 	l[i]=A[i+low];
 	i++;
 }
 while(j<nr)
 {
 	r[j]=A[mid+1+j];
 	j++;
 }
 i=0;j=0;
 k=low;
 while((i<nl)&&(j<nr))
 {
 	if(l[i]<=r[j])
 	A[k++]=l[i++];
 	else
 	A[k++]=r[j++];
 }
 while(i<nl)
 	A[k++]=l[i++];
 
 while(j<nr)
 A[k++]=r[j++];
 }


 void mergesort(int A[],int low,int high)
 { if(low<high){
 int mid=(high+low)/2;
  	mergesort(A,low,mid);
  	mergesort(A,mid+1,high);
  	merge(A,low,mid,high);
  }
 }
 
 int main()
 {
 	int n;
 	printf("enter size of array to be entered\n");
 	scanf("%d",&n);
 	int a[n];
 	printf("Enter elements of array\n");
 	for(int i=0;i<n;i++)
 	scanf("%d",&a[i]);
 	mergesort(a,0,n-1);
 	printf("after sorting \n");
 	for(int i=0;i<n;i++)
 	printf("%d \t",a[i]);
 }

