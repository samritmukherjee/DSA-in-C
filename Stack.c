#include<Stdio.h>
#define SIZE 5
int stack[SIZE], top = -1, choice, item;

void push()
 {
    if (top == SIZE - 1)
     {
        printf("Stack overflow! Cannot push %d\n", item);
     } 
    else
     {
        printf("Enter the item to push: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
        printf("Pushed %d onto the stack.\n", item);
     }
 }

 void pop()
  {
    if (top == -1)
     {
        printf("Stack underflow! Cannot pop from an empty stack.\n");
     } 
    else
     {
        item = stack[top];
        top--;
        printf("Popped %d from the stack.\n", item);
     }
 }

 void display()
  {
    if (top == -1)
     {
        printf("Stack is empty! Nothing to display.\n");
     } 
    else
     {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
         {
            printf("%d ", stack[i]);
         }
        printf("\n");
     }
 }

int main()
 {

    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                push();
                break;
            case 2: 
                pop();
                break;
            case 3: 
                display();
                break;
            case 4: 
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (1);

    return 0;
 }