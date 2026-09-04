#include <stdio.h>
#define MAX 10

//Caution: In linear double end queue we can put only 1 time from front cuz front==0 then there is no space on left
//Using shifting elements forward...

int deque[MAX];
int front = -1;
int rear =-1;

void insertfront() {
    int value,i;

    if (rear==MAX-1) {
        printf("Deque Overflow\n");
    } else {
        printf("Enter value:");
        scanf("%d", &value);

        if(front==-1) {
            front=0;
            rear=0;
        } else {
            for (i=rear; i>=front; i--) {
                deque[i+1]= deque[i];
            }
            rear++;
        }
        deque[front]=value;

        printf("%d inserted from front\n", value);
    }
}

void insertrear() {
    int value;

    if (rear == MAX-1) {
        printf("Deque Overflow\n");
    } else {
        printf("Enter Value:");
        scanf("%d",&value);

        if (front==-1) {
            front =0;
            rear=0;
        } else {
            rear++;
        }
        deque[rear] = value;

        printf("%d inserted from rear\n",value);
    }
}

void deletefront() {
    if (front==-1) {
        printf("Deque Underflow\n");
    } else {
        printf("%d deleted from front\n", deque[front]);

        if (front==rear) {
            front=-1;
            rear=-1;
        } else {
            front++;
        }
    }
}

void deleterear() {
    if (front==-1) {
        printf("Deque Underflow\n");
    } else {
        printf("%d deleted from rear\n", deque[rear]);

        if (front==rear) {
            front=-1;
            rear=-1;
        } else {
            rear--;
        }
    }
}

void display() {
    int i;

    if (front==-1) {
        printf("Deque is empty\n");
    } else {
        printf("Deque elements are: ");

        for(i=front; i<=rear;i++) {
            printf("%d",deque[i]);
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

