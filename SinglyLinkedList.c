#include<stdio.h>
#include<stdlib.h>

struct node
 {
    int data;
    struct node *link;
};

struct node *head = NULL;

int beg()
 {
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert at the beginning: ");
    scanf("%d", &ptr->data);
    ptr->link = head;
    head = ptr;
    return 0;
 }

 int anypos()
  {
    struct node *ptr, *ptr1;
    int pos, i=1;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert: ");
    scanf("%d", &ptr->data);
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    
    if (pos == 1) 
     {
        ptr->link = head;
        head = ptr;
        return 0;
     }

    ptr1 = head;
    while (i < pos - 1 && ptr1 != NULL) 
     {
        ptr1 = ptr1->link;
        i++;
     }

    if (ptr1 == NULL) 
     {
        printf("Position out of bounds! Cannot insert.\n");
        free(ptr);
        return 0;
     }

    ptr->link = ptr1->link;
    ptr1->link = ptr;
    return 0;
  }

 int end()
  {
    struct node *ptr, *ptr1;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert at the end: ");
    scanf("%d", &ptr->data);
    ptr->link = NULL;

    if (head == NULL) 
     {
        head = ptr;
        return 0;
     }

    ptr1 = head;
    while (ptr1->link != NULL) 
     {
        ptr1 = ptr1->link;
     }
    
    ptr1->link = ptr;
    return 0;
  }

 int display()
  {    
    if (head == NULL) 
     {
        printf("List is empty! Nothing to display.\n");
        return 0;
     }

    printf("Linked List elements: ");
    struct node *ptr = head;
    
    while (ptr != NULL) 
     {
        printf("%d ", ptr->data);
        ptr = ptr->link;
     }
    
    printf("\n");
    return 0;
  }

  int delbeg()
    {
     if (head == NULL) 
      {
          printf("List is empty! Cannot delete.\n");
          return 0;
      }
    
     struct node *ptr = head;
     head = head->link;
     free(ptr);
     return 0;
    }

    int delanypos()
     {
        struct node *ptr, *ptr1;
        int pos, i=1;
        printf("Enter the position to delete: ");
        scanf("%d", &pos);
        
        if (pos == 1) 
         {
            return delbeg();
         }

        ptr1 = head;
        while (i < pos - 1 && ptr1 != NULL) 
         {
            ptr1 = ptr1->link;
            i++;
         }

        if (ptr1 == NULL || ptr1->link == NULL) 
         {
            printf("Position out of bounds! Cannot delete.\n");
            return 0;
         }

        ptr = ptr1->link;
        ptr1->link = ptr->link;
        free(ptr);
        return 0;
     }

    int delend()
     {
        if (head == NULL) 
         {
            printf("List is empty! Cannot delete.\n");
            return 0;
         }

        if (head->link == NULL) 
         {
            free(head);
            head = NULL;
            return 0;
         }

        struct node *ptr = head;
        while (ptr->link->link != NULL) 
         {
            ptr = ptr->link;
         }

        free(ptr->link);
        ptr->link = NULL;
        return 0;
     }

int main()
 {
    int choice, item;
    do {
        printf("\nSingly Linked List Operations:-\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at any position\n");
        printf("3. Insert at the end\n");
        printf("4. Delete at the beginning\n");
        printf("5. Delete at any position\n");
        printf("6. Delete at the end\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
               beg();
               break;

            case 2:
                anypos();
                break;

            case 3:
                end();
                break;

            case 4:
                delbeg();
                break;

            case 5:
                delanypos();
                break;

            case 6:

                delend();
                break;

            case 7:
                display();      
                break;

            case 8: 
                    printf("Exiting the program. Goodbye!\n");
                    exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (1);

    return 0;
 }