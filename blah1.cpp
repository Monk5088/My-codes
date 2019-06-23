 #include<stdio.h>
 int main(){
 	int n;
 	printf("Enter no of elements\n");
 	scanf("%d",&n);
 	int a[n];
 	printf("enter elememts\n");
 	for(int i=0;i<n;i++)
 	{ 
 	scanf("%d",&a[i]);	
	 }
	 printf("rotated array is\n");
	  
    for(int j=n-2;j>=0;j--)
          {   
              temp=(j+1)%n;
              a[j]=a[temp];
              
          }
        
        int i=0;
        while(i<n)
        {
        	printf("%d",a[i++]);
		}
	}
    
