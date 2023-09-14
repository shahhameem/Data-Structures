#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
}*top = NULL;

void push(int value)
{
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->info = value;
    newnode->link = top;
    top = newnode;
    printf("%d pushed successfully.\n", value);
}

int peek() {
    if(top != NULL)
        printf("Top = %d\n", top->info);
    else
        printf("Stack is empty.\n");
}

void print() {
    struct node* temp = top;
    if(temp == NULL) {
        printf("Stack is empty.\n");
    }
    while(temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

void pop()
{
    if(top == NULL) {
        printf("Stack Underflow.\n");
        return;
    }
    int popped = top->info;
    struct node* temp = top;
    top = temp->link;
    free(temp);
    printf("%d popped.\n", popped);
}

int main()
{
    peek();
    push(10);
    push(20);
    push(30);
    push(40);
    peek();
    pop();
    peek();
    return 0;
}

