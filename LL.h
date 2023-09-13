struct linked_list {
    int data;
    struct linked_list* next;
};

typedef struct linked_list Node;

Node* create() {
    int value;
    scanf("%d", &value);
    if(value == -999)
        return NULL;
    Node* newNode = (Node*) malloc (sizeof(Node));
    newNode->data = value;
    newNode->next = create();
    return newNode;
}

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

void frequency(Node* head) {

}