#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
	int *a,n,i,min;
	printf("Enter size of array:");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int )*n);
	printf("Enter Array elements:\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("Manimum Value of Array elements:%d",min);
}
