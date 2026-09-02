#include <stdio.h>
#define MAX 10

int stack[MAX];
int top=-1;

void push() {
    int value;

    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter value:");
        scanf("%d",&value);
        
        top++;
        stack[top] = value;

        printf("%d pushed into stack\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        top--;
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top is element is %d\n",stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");

        for(int i= top; i>=0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice,value;
    while(1) {
        printf("\n ******Stack Array******\n");
        printf("1.Push\n 2.Pop\n 3.Peek\n 4.Display\n 5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice) {
            case 1: 
                    push(value); break;
            
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: return 0; 

            default: printf("\n Invalid choice\n");
        }
    }
    return 0;
}
