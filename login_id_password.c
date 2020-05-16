#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	char input_user[20],input_pass[20],ch,s;
	int i,p=0,count=0;
	/* Id and password is from database .
	  Here is gave a pre username and password for the login test  */
	char username[]="Veeresh",password[]="123";
	
	//Input for username and password from a user----
	start:
	printf("Username:");
	gets(input_user);
	printf("Password:");

	for(i=0;i<20;i++)
	{
		
		ch=getch();
		if(ch=='\r')
		   break;
		else  
		 input_pass[i]=ch; 
		 printf("*");   
		p++;
	}
	input_pass[p]='\0';
	
	
// Comparing Id and password from datbase....

//for checking--

//   printf("\n username=%d   password=%d  ",strcmp(input_user,username),strcmp(input_pass,password));

//checking till...
	if(strcmp(input_user,username)==0&&strcmp(input_pass,password)==0)
	{
		system("cls");
	    
	   
	   while(1)
	   {
	   	
	   	system("cls");
	   	printf("--------------------------------------------------\n");
	   	printf("           Loding");
	   	sleep(1);
	   	printf(".");
	   	sleep(1);
	   	printf(".");
	   	sleep(1);
	   	printf(".");
	   	sleep(1);
	   	printf(".");
	    //printf("\n--------------------------------------------------\n");
	   	if(count++==2)
	   	    break;
	   }
	     	
		system("cls"); 
	    printf("\nUsername & Password matched!Login Successfull");
	   
	    
	}
	
	else
	{
	count =0;
	  while(1){
	  	
	  system("cls");
	  sleep(1);
	   printf("\n\033[1;31m            ***********Login failed  *********\033[0m");
	 // sleep(1);
	 
	   if(count++==2)
	      break;
}
system("cls");
goto start;
}
	

	
	
}
