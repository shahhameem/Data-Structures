#include <stdio.h>
#include <stdlib.h>

struct linked_list {
    int data;
    struct linked_list* next;
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

void insertAtGivenNode(Node** ptr, int value, int loc) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = value;
    if(*ptr == NULL) {
        printf("The list is empty.");
        return;
    }   Node* current = *ptr;
    for(int i = 0; i < loc; i++)
        current = current->next;
    newNode->next = current->next;
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

void search(Node* head, int num){
    if (head == NULL) {
        printf("The List Is Empty!\n");
        return;
    }Node* temp = head;
    while(temp != NULL || num !=  temp->data){
       if(temp->data == num){
            printf("Element found at %p\n", head);
            return;
       }
        temp = temp->next;
    }
    if(temp == NULL)
        printf("Item not found\n");
}

int main() {
    Node* head = NULL;
    int choice, value;

    while (1) {
        printf("Enter the operation you want to perform on the linked list:\n");
        printf("1. Print List\n2. Insert at Front\n3. Insert at End\n4. Insert at given node\n6. Search\n7. Exit\n");
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

