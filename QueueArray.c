#include <stdio.h>
#define MAX 10

int queue[MAX];
front=-1;
rear=-1;

void enqueue() {
    int value;

    if (rear == MAX-1){
        printf("Queue Overflow\n");
    } else {
        printf("Enter Value: ");
        scanf("%d", &value);

        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;

        printf("%d inserted into queue\n",value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("%d deleted from queue\n",queue[front]);
        front++;

        if (front > rear) {
            front =-1;
            rear =-1;
        }
    }
}

void peek() {
    if  (front == -1 || front > rear ) {
        printf("Queue is empty\n");
    } else { 
        printf("Front element is %d\n", queue[front]);
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: \n");

        for (int i = front; i <= rear; i++) {
            printf("%d",queue[i]);
        }
        printf("\n");
    }
}


int main() {
    int choice,value;
    while(1) {
        printf("\n ******Queue Array******\n");
        printf("1.Enqueue\n 2.Dequeue\n 3.Peek\n 4.Display\n 5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice) {
            case 1: 
                    enqueue(value); break;
            
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: return 0; 

            default: printf("\n Invalid choice\n");
        }
    }
    return 0;
}