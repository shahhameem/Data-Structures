#include <stdio.h>
#include <stdlib.h>

struct linked_list {
    int data;
    struct Node* next;
};

typedef struct linked_list Node;

void printList(Node* head) {
    if (head == NULL) {
        printf("The List Is Empty!\n");
        return;
    }
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void insertAtFront(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(Node** head, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void deleteList(Node** head) {
    Node* current = *head;
    Node* nextNode;

    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }

    *head = NULL;
}

int main() {
    Node* head = NULL;
    int choice, value;

    while (1) {
        printf("Enter the operation you want to perform on the linked list:\n");
        printf("1. Print List\n2. Insert at Front\n3. Insert at End\n4. Delete List\n5. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
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
                deleteList(&head);
                printf("List deleted.\n");
                break;
            case 5:
                deleteList(&head);
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

