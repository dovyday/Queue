#include "Queue.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void initQueue(Queue *queue, int capacityChosen){
    queue -> capacity = capacityChosen;
    queue -> data = (int*)malloc(sizeof(int) * capacityChosen);
    queue -> front = 0;
    queue -> rear = 0;
    queue -> size = 0;
    
}

bool isEmpty(Queue *queue){
    if(queue -> size == 0){
        return true;
    }
    return false;
}

bool isFull(Queue *queue){
    if(queue -> capacity == queue -> size){
        return true;
    }
    return false;
}

void enqueue(Queue *queue, int item){
    if(isFull(queue)){
        printf("Error: The Queue is full\n");
        return;
    }
    queue -> data[queue -> rear] = item;
    queue -> size++;
    queue -> rear = (queue -> rear + 1) % queue -> capacity;

}

int dequeue(Queue *queue){
    if(isEmpty(queue)){
        printf("Error: The Queue is empty\n");
        return -1;
    }

    int item = queue -> data[queue -> front];
    queue -> size--;
    queue -> front = (queue -> front + 1) % queue -> capacity;
    return item;
}

int size(Queue *queue){
    return queue -> size;
}

int peek(Queue *queue){
    if(isEmpty(queue)){
        printf("Error: The Queue is empty\n");
        return INT_MIN;
    }
    return queue->data[queue->front];
}
int rear(Queue *queue){
    if(isEmpty(queue)){
        printf("Error: The Queue is empty\n");
        return INT_MIN;
    }
    return queue->data[(queue->rear - 1 + queue->capacity) % queue->capacity];
}

void DeleteQueue(Queue *queue){
    free(queue->data);
    queue -> size = 0;
    queue -> capacity = 0;
    queue -> rear = 0;
    queue -> front = 0;
}
