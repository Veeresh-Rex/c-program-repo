#include<stdio.h>
int main()
{
	int i,n,j,flag;
	printf("Enter the number till you want to print prime number.\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
			flag=1;
			break;
		    }
		}
		if(flag==0)
		  printf("%d  ",i);
	}
	return 0;
}
