#include <stdio.h>

int main()
{
	char ch;
	//infinite loop
	while(1)
	{
		printf("Enter any character: ");
		//read a single character
		ch=fgetc(stdin);
		
		if(ch==0x0A)
		{
			printf("ENTER KEY is pressed.\n");
			break;
		}
		else
		{
			printf("%c is pressed.\n",ch);
		}
		//read dummy character to clear
		//input buffer, which inserts after character input
		ch=getchar();
	}
	return 0;
}
