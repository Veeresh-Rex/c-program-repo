// WAP is to x power y 
#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,y;
  printf("Enter base :");
  scanf("%d",&x);
  printf("Enter power:");
  scanf("%d",&y);
//  for(i=1;i<=y;i++)
//  {
//  	
//  	x=x*i;
//  	
//	  }	

   //i=pow(x,y);
	printf("Answer is: %d",power(x,y));
	
	return 0;
	
}

power(int a,int b)
{
	if(b==1)
	  return a;
	else
	  return a*power(a,b-1);
	
}
