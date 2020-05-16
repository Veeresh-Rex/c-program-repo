#include <stdio.h>  
#include<stdlib.h>   
int main()  
{  
    int length, i,j;   
    printf("Enter the length of Array:\n");
    scanf("%d",&length);
    int arr[length];
    int freq[length];  
    for(i=0;i<length;i++)
	   scanf("%d",&arr[i]);
	int visited = INT_MIN;  
    for( i = 0; i < length; i++){  
        int count = 1;  
        for( j = i+1; j < length; j++){  
            if(arr[i] == arr[j]){  
                count++;  
                freq[j] = visited;  
            }  
        }  
        if(freq[i] != visited)  
            freq[i] = count;  
    }  
     printf("\n---------------------\n");  
    for( i = 0; i < length; i++){  
        if(freq[i] != visited){  
            printf("    %d", arr[i]);  
            printf("    |  ");  
            printf("  %d\n", freq[i]);  
        }  
    }  
    printf("---------------------\n");  
    return 0;  
}  

