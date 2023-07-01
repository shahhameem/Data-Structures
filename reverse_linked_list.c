#include <stdio.h>
#include <stdlib.h>

struct linked_list {
    int data;
    struct Node* next;
};
typedef struct linked_list Node;



void printList(Node* head) {
//    if (head == NULL) {
//        printf("The List Is Empty!\n");
//        return;
//    }
    Node* current = head;
    printf("\nThe values stored in the linked list are :\n");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void reverseList(Node* head) {
	Node* prev = &head, current = head, forward = head -> next, ;
	while(next != NULL) {
		forward = forward -> next;
		forward =
	}
	
}

int main() {
    Node* head = NULL;
    int value;
    char contd = 'y';
    while(1) {
    	printf("Enter the value you want to insert in the linked list: \n");
        scanf("%d", &value);
        insertAtEnd(&head, value);
        printList(head);
        printf("\nEnter y to add or other key to stop\n");
        scanf(" %c", &contd);
        if(contd != 'n') break;
	}
	reverse_list(head);
    return 0;
}
