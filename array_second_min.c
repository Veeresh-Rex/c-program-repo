#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
	int *a,n,i,min,min2;
	printf("Enter size of array:");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int )*n);
	printf("Enter Array elements:\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	min=min2=INT_MAX;
	
    for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min2=min;
			min=a[i];
		}
		else
		 if(min2>a[i] && a[i]!=min)
    {
        min2=a[i];
    }
	}
	


	printf("Manimum Value of Array elements:%d",min2);
}
