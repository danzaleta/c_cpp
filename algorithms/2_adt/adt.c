
// 2. Abstract Data Type (ADT)
// 2.1 Queue
#include <stdio.h>
#define SIZE 5

int values[SIZE],
    front = -1,
    rear = -1;

// Declarations
void enQueue(int value);
void deQueue();


int main(int argc, char const *argv[])
{
    enQueue(1);
    enQueue(2);
    enQueue(4);
    enQueue(8);
    enQueue(2);
    enQueue(9);
    enQueue(5);
    deQueue();
    enQueue(10);
    
    return 0;
}


// Definitions
void enQueue(int value)
{
    if (rear == SIZE -1)
    {
        printf("Queue lleno \n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        values[rear] = value;
        printf("Valor %d insertado \n", value);
    }   
}


void deQueue()
{
    if (front == -1)
    {
        printf("Queue vacio \n");
    }
    else
    {
        printf("Valor %d eliminado \n", values[front]);
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }   
    }
}
