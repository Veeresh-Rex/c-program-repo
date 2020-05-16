//Write a C program that read 5 numbers and sum of all odd values between them.
#include<stdio.h>
//#define n 10
int main()
{
  int 	a[20],sum=0,n,i;
  printf("Enter the size of array:");
  scanf("%d",&n);
  printf("Enter array elements:");
  for( i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
   	if(a[i]%2!=0)
   	{
   		sum=sum+a[i];
	   }
   	
   	
	} 
	printf("Sum is:%d",sum);
	
	return 0;
}
