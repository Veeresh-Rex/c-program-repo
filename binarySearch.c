//Binary search Recrsive solution
#include <stdio.h>
#include "limits.h"
#define max 40
int binarysearch(int arr[], int s, int e, int ele)
{
    if (e >= s)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == ele)
            return mid;
        if (arr[mid] > ele)
            return binarysearch(arr, s, mid - 1, ele);
        if (arr[mid] < ele)
            return binarysearch(arr, mid + 1, e, ele);
    }
    return INT_MIN;
}
int main()
{
    int arr[max], size, ele;
    printf("Enter Size of Array : ");
    scanf("%d", &size);
    printf("Enter The element to be search: ");
    scanf("%d", &ele);
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = binarysearch(arr, 0, size, ele);
    if (x == INT_MIN)
        printf("Element not found");
    else
    {
        printf("Element found at:  %d", x);
    }

    return 0;
}
