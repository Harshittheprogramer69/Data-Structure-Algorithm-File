#include <stdio.h>
#define MAX 100
int queue[MAX] = {10, 20, 30, 40, 50};
int front = 0;
int rear = 4;
void DEQUEUE() {
    if(front == -1 || front > rear) {
        printf("QUEUE UNDERFLOW\n");
        return;
    }
    printf("Removed Element: %d\n", queue[front]);
    front++;
    if(front > rear) {
        front = rear = -1;
    }
    printf("Element Removed Successfully\n");
}
void DISPLAY() {
    if(front == -1 || front > rear) {
        printf("QUEUE is empty\n");
        return;
    }
    printf("QUEUE ELEMENTS:\n");
    for(int i = front; i <= rear; i++) {
        printf("%d\n", queue[i]);
    }
}
int main() {
    int Count;
    printf("Enter how many elements you want to remove: ");
    scanf("%d", &Count);
    for(int i = 0; i < Count; i++) {
        DEQUEUE();
        printf("\n");
    }
    DISPLAY();
    return 0;
}