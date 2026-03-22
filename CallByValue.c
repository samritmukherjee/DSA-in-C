#include <stdio.h>
void swap(int a, int b)
 {
    int temp = a;
    a = b;
    b = temp;

    printf("Inside function after swapping: a = %d, b = %d\n", a, b);
    
 }

 int main()
  {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    
    swap(x, y);
    
    printf("Inside Main after swapping: x = %d, y = %d\n", x, y);

    swap(x, y);
    return 0;
 }