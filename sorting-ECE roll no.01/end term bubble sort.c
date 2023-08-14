#include<stdio.h>
int main(){
	
	int i,n=5,temp,j,a[20],k,b;
	printf("enter the size of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf ("enter elements:");
		scanf("%d",&a[i]);
		
		}
		for(b=0;b<n-1;b++)
		{
		
		for(k=0;k<n-1;k++)
		{
	
		if(a[k]>a[k+1]);
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
		for(j=0;j<n;j++){
			printf("%d \t",&a[j]);
			
		}
		
		
		
		
		
		
		
		
		
	
	return 0;
	
	
}