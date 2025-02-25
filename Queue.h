#ifndef QUEUE_H  
#define QUEUE_H  

#include <stdbool.h>

typedef struct Queue{
    int rear;
    int front;
    int size;
    int *data;
    int capacity;
} Queue;

void initQueue(Queue *queue, int capacityChosen);
bool isEmpty(Queue *queue);
bool isFull(Queue *queue);
void enqueue(Queue *queue, int item);
int dequeue(Queue *queue);
int size(Queue *queue);
int peek(Queue *queue);
int rear(Queue *queue);
void DeleteQueue(Queue *queue);

#endif