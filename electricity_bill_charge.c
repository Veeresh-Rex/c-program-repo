/*Write a C program to input electricity unit charge and 
calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

How to calculate electricity bill using if else in C programming.
 Program to find electricity bill using if else in C. Logic to find net electricity bill in C program.*/

#include<stdio.h>
int main()
{
	int n;
	float rs;
	printf("Enter The Units:\n");
	scanf("%d",&n);
    if(n<=50)
    {
    	rs=n*.50;
	}
	else if(n<=150)
	        rs=(n=n-50)*.75+.5*50;
	else if(n<=250)
	        rs=(n-=150)*1.20+100*.75+50*.50;
		else
		rs=(n-=250)*1.50+100*1.20+100*.75+50*.50;
		    
	   
	   rs=rs+rs*.2;
	   printf("Bill is=%.2f",rs);
}
