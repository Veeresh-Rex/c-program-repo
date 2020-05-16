#include<stdio.h>

int main()
{
	int n,c;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Factorial of number is: %d",fact(n));
	return 0;
}
fact (int n)
{
	if(n==0||n==1)
	  return 1;
	else
	  return n*fact(n-1);  
}
