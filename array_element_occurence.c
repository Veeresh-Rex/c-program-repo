#include<stdio.h>

#define n 10
int main()
{
	int a[n],j,i,count=1,flag=0,l,k=0,b[n],flg2;
	printf("Enter an array :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	b[0]=43534565;
	for(i=0;i<n;i++)
	{ flag=0;
	count=1;
		for(j=i+1;j<n;j++)
		{
	        if(a[i]==a[j])
		   {
		   	flag=1;
			count++;
		    }
	
    	}
	
    	if(flag==1)
    	{
    		flag=0;
    		for(j=0;j<=k;j++)
    		{
			
    		if(a[i]==b[j]){
			
    		flag=1;
    		break;
        	}
            }
    		if(flag==0)
			{
			
    		b[k]=a[i];
    		printf("The value %d comes %d times in array.\n",a[i],count);
    		k++;
    	    }
		}
	}
}
