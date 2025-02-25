#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>

void runTests() {
    Queue q;
    initQueue(&q, 5);
    
    printf("Testas 1:\n");
    printf("Tuščias: %s\n", isEmpty(&q) ? "Taip" : "Ne");
    printf("Pilnas:  %s\n", isFull(&q) ? "Taip" : "Ne");
    printf("Dydis: %d\n", size(&q));
    
    printf("\nTestas 2: Įdėti elementai (10, 20, 30, 40, 50)\n");
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    printf("Tuščias: %s\n", isEmpty(&q) ? "Taip" : "Ne");
    printf("Pilnas: %s\n", isFull(&q) ? "Taip" : "Ne");
    printf("Dydis: %d\n", size(&q));
    printf("Priekis: %d\n", peek(&q));
    printf("Galas: %d\n", rear(&q));

    printf("\nTestas 3: Įdedamas elementas į pilną eilę.\n");
    enqueue(&q, 60); // Should print "The Queue is full"

    printf("\nTest 4: Elementų pašalinimas\n");
    printf("Išimtas: %d\n", dequeue(&q));
    printf("Išimtas: %d\n", dequeue(&q));
    printf("Išimtas: %d\n", dequeue(&q));
    printf("Dydis: %d\n", size(&q));
    printf("Priekis: %d\n", peek(&q));
    printf("Galas: %d\n", rear(&q));

    printf("\nTest 5: Įdedami papildomi elementai (60, 70, 80)\n");
    enqueue(&q, 60);
    enqueue(&q, 70);
    enqueue(&q, 80);
    printf("Dydis: %d\n", size(&q));
    printf("Priekis: %d\n", peek(&q));
    printf("Galas: %d\n", rear(&q));

    printf("\nTest 6: Ištuštinama eilė\n");
    while (!isEmpty(&q)) {
        printf("Išimtas: %d\n", dequeue(&q));
    }
    printf("Tuščias: %s\n", isEmpty(&q) ? "Taip" : "Ne");

    printf("\nTest 7: Išimamas elementas iš tuščios eilės\n");
    dequeue(&q);

    DeleteQueue(&q);
    printf("Pabaiga\n");
}

int main() {
    runTests();
    return 0;
}