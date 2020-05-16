//Fibonacci Series  with recursion 
int fib(int );
#include<stdio.h>
int main()
{
	int n,a=0,i,b=1,c;
	printf("Enter the number of terms:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	    printf("%d  ",fib(i));
	
}
int fib(int n){
	if(n==1||n==0)
	  return n;
	
	else
	return fib (n-1)+fib(n-2);
	
}
