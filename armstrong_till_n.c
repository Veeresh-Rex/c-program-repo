//Wap in c to print armstrong number

#include<stdio.h>
void armstr(int );
int main()
{
	int i,n;
	printf("Enter number till the armstrong to be printed:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
        armstr(i);
        return 0;  
}
void armstr(int a)
{
	int n=a,rem,sum=0;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
		
	}
	if(a==sum)
	printf("%d   ",a);
	
}
