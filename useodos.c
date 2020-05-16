#include <stdio.h>
#include <process.h>
 
int main()
{
    int choice=0;
 
    printf("\n***************************************\n");
    printf("1. Open Notepad...\n");
    printf("2. Get Ip Address...\n");
    printf("3. Shut down the computer...\n");
 
    printf("** Enter your choice :");
    scanf("%d",&choice);
 
    switch(choice)
    {
        case 1:
            system("notepad");
            break;
        case 2:
            system("ipconfig");
            system("pause");
            break;
        case 3:
            system("SHUTDOWN -S");
            system("pause");
            break;
        default:
            printf("\n Invalid choice !!!");
    }
 
    return 0;
}
