#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node*next;
};

struct node *front = NULL;
struct node *rear = NULL;
struct node *p;

void insertfront() {
    int value;

    printf("Enter value:");
    scanf("%d", &value);

    p=(struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;

    if(front==NULL){
        front=p;
        rear=p;
    } else {
        p->next=front;
        front=p;
    }
    printf("%d inserted from front\n", value);
}

void insertrear() {
    int value;

    printf("Enter value:");
    scanf("%d", &value);

     p=(struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;

    if(rear==NULL) {
        front=p;
        rear=p;
    } else {
        rear->next=p;
        rear=p;
    }
    printf("%d inserted from rear\n", value);
}

void deletefront() {
    struct node*temp;

    if(front == NULL) {
        printf("Deque Underflow\n");
    } else {
    temp=front;

    printf("%d is deleted\n", front->data);
    front= front->next;

    if (front==NULL){
        rear=NULL;
    }
    
    free(temp);
    }
}

void deleterear() {
    struct node*temp;

    if(rear==NULL) {
        printf("Deque Underflow\n");
    } else {
    printf("%d is deleted", rear->data);

    if (front == rear) {
        free(rear);
        front=NULL;
        rear=NULL;
    } else {
        temp=front;

        while( temp-> next != rear) {
            temp=temp->next; 
        }

        temp->next=NULL;
        free(rear);
        rear=temp;
         }
    }
}

void display() {
    struct node *temp;

    if (front == NULL) {
        printf("Deque is empty\n");
    } else {

        temp=front;
        
        printf("Deque elements are:");

        while (temp != NULL) {
            printf("%d", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}


int main() {
    int choice,value;
    while(1) {
        printf("\n******Double End Queue******\n");
        printf("1.Insert Front\n 2.Insert Rear\n 3.Delete Front\n 4.Delete Rear\n 5.Display\n 6.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);                                    

        switch(choice) {
            case 1: insertfront(); break;       
            case 2: insertrear(); break;
            case 3: deletefront(); break;
            case 4: deleterear(); break;
            case 5: display(); break;
            case 6: return 0; 

            default: printf("\n Invalid choice\n");
        }
    }
    return 0;
}