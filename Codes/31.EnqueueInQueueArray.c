#include <stdio.h>
#define MAX 100
int queue[MAX];
int front = -1;
int rear = -1;
void ENQUEUE(int value) {
    if(rear == MAX - 1) {
        printf("Queue OVERFLOW\n");
        return;
    }
    if(front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("Element Added Successfully\n");
}
void DISPLAY() {
    if(front == -1 || front > rear) {
        printf("QUEUE is empty;\n");
        return;
    }
    printf("QUEUE ELEMENTS: \n");
    for(int i = front; i <= rear; i++) {
        printf("%d\n",queue[i]);
    }
}
int main() {
    int Count, value;
    printf("Enter how many values you want to add : ");
    scanf("%d",&Count);
    for(int i = 0; i < Count; i++) {
        printf("Value : ");
        scanf("%d",&value);
        ENQUEUE(value);
        printf("\n");
    }
    DISPLAY();
}