#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top=NULL;
struct node *p;

void push(int value) {
    p=(struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;

    if (top==NULL) {
        top=p;
    } else {
        p->next=top;
        top=p;

    printf("Inserted successfully!");
    }
}

void pop() {
    if (top == NULL) {
        printf("\n Stack Underflow");
        return;
    }

    struct node* temp=top;
    printf("\n Popped: %d", top->data);
    top=top->next;
    
    free(temp);
}

void peek() {
    if (top==NULL){
        printf("Stack is Empty!");
        return;
    }
    printf("Front element: %d", top->data);
}

void isEmpty() {
    if (top==NULL){
        printf("Stack is Empty\n");
    } else {
        printf("No, Stack is not Empty");
    }
}

void display() {
    if (top==NULL) {
        printf("\n Stackis Empty!\n");
        return;
    }

    struct node *p= top;
    printf("\n Stack Elements:");
    
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;
    }
    printf("\tNULL\n");
}


int main() {
    int choice,value;
    while(1) {
        printf("\n ******Stack Linked List******\n");
        printf("1.Push\n 2.Pop\n 3.Peek\n 4.Display\n 5.isEmpty\n 6.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice) {
            case 1: printf("Enter value:");
                    scanf("%d",&value);
                    push(value); break;
            
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: isEmpty(); break;
            case 6: return 0; 

            default: printf("\n Invalid choice\n");
        }
    }
    return 0;
}


