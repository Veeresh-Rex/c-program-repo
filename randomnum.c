#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int l=1,u=100,n,i;
	
	for(i=1;i<=10;i++)
	{
	n=rand()%((u-l+1)+l);
	printf("Random no. is:%d\n\n",n);
}

printf("*******Second Method********\n");

srand(time(0));
int min=10,max=20,f;

printf("\nRandom number:%d ",(rand()%(min-max+1)+min));
printf("\nRandom number:%d ",(rand()%(min-max+1)+min));
printf("\nRandom number:%d ",(rand()%(min-max+1)+min));
printf("\nRandom number:%d ",(rand()%(min-max+1)+min));
printf("\nRandom number:%d ",(rand()%(min-max+1)+min));
printf("\nRandom number:%d ",(rand()%(min-max+1)+min));
printf("\nRandom number:%d ",(rand()%(min-max+1)+min));

	return 0;
	
}
