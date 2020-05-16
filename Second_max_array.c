#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
	int *a,n,i,max,k=4,max2;
	printf("Enter size of array:");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int )*n);
	printf("Enter Array elements:\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	max=max2=INT_MIN;
//	printf("%d",INT_max);
    for(i=0;i<n;i++)
	{
		if(max<k)
		{
			max2=max;
			max=a[i];
		}
		else
		 if(max2<k&& k!=max)
    {
        max2=a[i];
    }
	}
	

	printf("Manimum Value of Array elements:%d",max2);
}
