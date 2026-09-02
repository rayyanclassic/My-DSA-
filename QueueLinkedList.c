#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;
struct node *p = NULL;

void enqueue(int value) {
    p= (struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;
    
    if (front==NULL) {
        front=rear=p;
    } else {
        rear->next=p;
        rear=p;
    }
    printf("%d enqueued successfully",value);
}

void dequeue() {
    if (front == NULL) {
        printf("\n Queue Underflow");
        return;
    }

    struct node* temp=front;
    printf("\n Dequeued: %d", front->data);
    front=front->next;

    if (front == NULL) {
        rear=NULL;
    }
    free(temp);
}

void peek() {
    if (front==NULL){
        printf("Queue is Empty!");
        return;
    }
    printf("Front element: %d", front->data);
}

void isEmpty() {
    if (front==NULL){
        printf("Queue is Empty\n");
    } else {
        printf("No, Queue is not Empty");
    }
}

void display() {
    if (front==NULL) {
        printf("\n Queue is Empty!\n");
        return;
    }

    struct node *p= front;
    printf("\n Queue Elements:");
    
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;
    }
    printf("\tNULL\n");
}

int main() {
    int choice,value;
    while(1) {
        printf("\n ******Queue Linked List******\n");
        printf("1.Enqueue\n 2.Dequeue\n 3.Peek\n 4.Display\n 5.isEmpty\n 6.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice) {
            case 1: printf("Enter value:");
                    scanf("%d",&value);
                    enqueue(value); break;
            
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: isEmpty(); break;
            case 6: return 0; 

            default: printf("\n Invalid choice\n");
        }
    }
    return 0;
}
