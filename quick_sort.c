#include<stdio.h> 
#define max 20

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];
    int i = (low - 1); 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++;
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

int main() 
{ 
    int size,arr[max],i;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    quickSort(arr, 0, size-1); 
    printf("Sorted array: \n"); 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
    return 0; 
} 