//Write a recursive function to calculate sum of squares of digits of a number
#include<stdio.h>
int sum_square(int );
int main()
{
  int a;
  printf("Enter a digit:");
  scanf("%d",&a);
  printf("Sum of squares of digits : %d",sum_square(a));	
	return 0;
}

int sum_square(int a)
{
	
	
	if(a==0)
	 return 0;
	 
	 return (a%10)*(a%10)+sum_square(a/10);
	
}
