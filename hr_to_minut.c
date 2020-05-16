//Write a C program that takes hours and minutes as input, and calculates the total number of minutes.

#include<stdio.h>
int main()
{
	int hr,mint,minut;
	printf("Enter hours and minute :\n");
	printf("Enter hours:");
	scanf("%d",&hr);
	printf("Enter minutes:");
	scanf("%d",&mint);
	minut=hr*60+mint;
	printf("\nTotal minutes : %d",minut);
	
	
}
