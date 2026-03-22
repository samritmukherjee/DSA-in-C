#include<Stdio.h>
#define SIZE 5
int queue[SIZE], front = -1, rear = -1, choice, item;

void enqueue()
 {
    if (rear == SIZE - 1)
     {
        printf("Queue overflow! Cannot enqueue %d\n", item);
        return;
     }
    
     printf("Enter the item to enqueue: ");
     scanf("%d", &item);
     rear++;
     queue[rear] = item;
     if (front == -1) 
     {   
        front = 0; 
     }
     printf("Enqueued %d into the queue.\n", item);
 }

 void dequeue()
  {
     if (front == -1) 
     {
        printf("Queue underflow! Cannot dequeue from an empty queue.\n");
        return;
     }
     printf("Dequeued %d from the queue.\n", queue[front]);
     front++;
     if (front > rear) 
     {
        front = -1;
        rear = -1;
     }
  }

 void display()
  {
     if (front == -1) 
     {
        printf("Queue is empty.\n");
        return;
     }
     printf("Queue elements are: ");
     for (int i = front; i <= rear; i++) 
     {
        printf("%d ", queue[i]);
     }
     printf("\n");
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
                enqueue();
                break;
            case 2: 
                dequeue();
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