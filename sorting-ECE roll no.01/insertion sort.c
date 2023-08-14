#include<stdio.h>
int main(){
	int a[100],i,j,n,temp;
	printf("enter the size :");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
   for(j=i;j>0&&a[j-1]>a[j];j--)
   {
   	temp=a[j];
   	a[j]=a[j-1];
   	a[j-1]=temp;
   	
   	
		   }		
	}
	printf("\n insertion sort");
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
		
	}
	return 0;
}