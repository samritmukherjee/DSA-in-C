#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int queue[SIZE], front = -1, rear = -1, choice, item; 

void circular_enqueue()
 {
    if ((rear + 1) % SIZE == front) 
     {
        printf("Queue overflow! Cannot enqueue %d\n", item);
        return;
     }
    
     printf("Enter the item to enqueue: ");
     scanf("%d", &item);
     if (front == -1) 
     {   
        front = 0; 
     }
     rear = (rear + 1) % SIZE;
     queue[rear] = item;
     printf("Enqueued %d into the queue.\n", item);
 }

 void circular_dequeue()
  {
     if (front == -1) 
     {
        printf("Queue underflow! Cannot dequeue from an empty queue.\n");
        return;
     }
     printf("Dequeued %d from the queue.\n", queue[front]);
     if (front == rear) 
      {
         front = -1;
         rear = -1;
      } 
      else 
      {
         front = (front + 1) % SIZE;
      }
   }

 void circular_display()
  {
     if (front == -1) 
     {
        printf("Queue is empty.\n");
        return;
     }
     printf("Queue elements are: ");
     int i = front;
     while (i != rear) 
      {
         printf("%d ", queue[i]);
         i = (i + 1) % SIZE;
      }
     printf("%d\n", queue[rear]);
  }

int main()
 {

    do {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
               circular_enqueue();
                break;
            case 2:
                circular_dequeue();
                break;
            case 3: 
                circular_display();
                break;
            case 4:
                printf("Exiting...\n");
                exit (0);
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    } while (1);   
}