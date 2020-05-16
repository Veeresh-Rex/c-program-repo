//Fibonacci Series  without recursion 

#include<stdio.h>
int main()
{
	int n,a=0,i,b=1,c;
	printf("Enter the number of terms:\n");
	scanf("%d",&n);
	printf("%d  %d  ",a,b);
	for(i=3;i<=n;i++)
	{
		c=b+a;
		printf("%d  ",c);
		a=b;
		b=c;
	}
}

