# Duomenų struktūros (Eilės) realizavimas C kalboje su dinaminiu masyvu

Šiame darbe yra įgyvendinta apskritiminė eilė naudojant C kalbą.

## **Aprašymas**
Eilė yra duomenų struktūra, kuri veikia pagal **FIFO (First-In-First-Out)** principą. Tai reiškia, kad pirmasis elementas, kuris buvo pridėtas, bus paimtas pirmasis.

## **Funckijos**

### **1. Inicijuoti eilę**
```c
void initQueue(Queue *queue, int capacityChosen);
```
**Aprašymas:** Sukuria naują eilę su nurodyta talpa.

### **2. Patikrinti, ar eilė yra tuščia**
```c
bool isEmpty(Queue *queue);
```
**Grąžina:** `true`, jei eilė tuščia, kitaip `false`.

### **3. Patikrinti, ar eilė yra pilna**
```c
bool isFull(Queue *queue);
```
**Grąžina:** `true`, jei eilė pilna, kitaip `false`.

### **4. Pridėti elementą į eilę**
```c
void enqueue(Queue *queue, int item);
```
**Aprašymas:** Prideda naują elementą į eilę. Jei eilė pilna, išveda klaidos pranešimą.

### **5. Pašalinti ir gauti pirmąjį eilės elementą**
```c
int dequeue(Queue *queue);
```
**Grąžina:** Pirmąjį eilės elementą. Jei eilė tuščia, grąžina `-1`.

### **6. Gauti eilės dydį**
```c
int size(Queue *queue);
```
**Grąžina:** Dabartinį elementų skaičių eilėje.

### **7. Peržiūrėti pirmąjį eilės elementą (nepašalinant jo)**
```c
int peek(Queue *queue);
```
**Grąžina:** Pirmąjį eilės elementą. Jei eilė tuščia, grąžina `INT_MIN`.

### **8. Peržiūrėti paskutinį eilės elementą**
```c
int rear(Queue *queue);
```
**Grąžina:** Paskutinį eilės elementą. Jei eilė tuščia, grąžina `INT_MIN`.

### **9. Išvalyti eilę ir atlaisvinti atmintį**
```c
void DeleteQueue(Queue *queue);
```
**Aprašymas:** Ištrina eilės duomenis ir atlaisvina atmintį.

## **Pavyzdys**

```c
#include "Queue.h"
#include <stdio.h>

int main() {
    Queue q;
    initQueue(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 20);
    printf("Priekinis elementas: %d\n", peek(&q));
    printf("Pašalintas elementas: %d\n", dequeue(&q));
    DeleteQueue(&q);
    return 0;
}
```

## **Paleidimas**

Norint paleisti testo kodą, paleiskite **go.cmd** failą.

