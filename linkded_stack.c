#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


struct node {
    int info;
    struct node* link;
}*top = NULL;

int count = 0;



void create()
{
    int value;
    printf("Enter the values (-999 to stop) :");
    scanf("%d", &value);
    while(value != -999)
    {
        struct node* newnode = (struct node*) malloc(sizeof(struct node));
        newnode->info = value;
        if(top == NULL) {
            top = newnode;
            newnode->link = NULL;
        }
        else {
            newnode->link = top;
            top = newnode;
        }
        scanf("%d", &value);
    }
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

int pop()
{
    if(top == NULL) 
        printf("Stack Underflow.\n");
    int popped = top->info;
    top = top->link;
    free(top);
    return popped;
}

int main() 
{
    
    create();
    print();
    return 0;
}

