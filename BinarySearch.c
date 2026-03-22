#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int binarysearch(int arr[], int size, int item)
 {
    int u=0 , h= size-1; 
    while(u<h)
     {
        int mid=(u+h)/2;
        if (arr[mid] == item)
         {
            return mid;
         }
        else if (mid > item)
         {
            h=mid-1;
         }
        else
         {
            u=mid+1;
         }
     }
    return -1; 
 }

 int main()
  { 
    int arr[SIZE], size, item;

    printf("Enter the number of elements in the array (max %d): ", SIZE);
    scanf("%d", &size);

    if (size > SIZE)
     {
        printf("Size exceeds maximum limit of %d.\n", SIZE);
        return 0;
     }

    printf("Enter %d elements:-\n", size);
    
    for (int i = 0; i < size; i++)
     {
        printf("arr [%d]: ", i);
        scanf("%d", &arr[i]);
     }

    printf("Enter the item to search: ");
    scanf("%d", &item);

    int result = binarysearch(arr, size, item);
    
    if (result != -1)
     {
        printf("Item found at array index: arr[%d]\n", result);
     } 

    else
     {
        printf("Item not found in the array.\n");
     }

    return 0;
  }