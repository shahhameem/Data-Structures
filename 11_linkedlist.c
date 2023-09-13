#include <stdio.h>
#include <stdlib.h>
#include "LL.h"

int main() {
    Node* head = NULL;
    int choice, value;

    while (1) {
        printf("Enter the operation you want to perform on the linked list:\n");
        printf("-1. Find Frequency\n0. Create List\n1. Print List\n2. Insert at Front\n3. Insert at End\n4. Insert at given node\n6. Search\n7. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case -1:
                frequency(head);
            break;
            case 0:
                printf("Enter the values (-999 to stop): ");
                head = create();
            break;
            case 1:
                printf("Linked List: ");
                printList(head);
            break;
            case 2:
                printf("Enter the value you want to insert at the front: ");
                scanf("%d", &value);
                insertAtFront(&head, value);
            break;
            case 3:
                printf("Enter the value you want to insert at the end: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
            break;
            case 4:
                int loc;
                printf("Enter the value you want to insert and location: ");
                scanf("%d %d", &value, &loc);
                insertAtGivenNode(&head, value, loc);
            break;                
            case 5:
                deleteList(&head);
                printf("List deleted.\n");
            break;
            case 6:
                int num;
                printf("Enter the element you want to search : ");
                scanf("%d", &num);
                search(head, num);
            break;
            case 7:
                deleteList(&head);
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

