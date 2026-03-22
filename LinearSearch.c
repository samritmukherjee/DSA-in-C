#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int linearSearch(int arr[], int size, int item)
 {
    for (int i = 0; i < size; i++)
     {
        if (arr[i] == item)
         {
            return i;
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

    int result = linearSearch(arr, size, item);
    
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