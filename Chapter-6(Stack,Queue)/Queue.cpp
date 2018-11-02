#include <iostream>
#include <stdio.h>
#define Q_size 5
using namespace std;

typedef struct
{
    int data[Q_size+1];
    int head,tail;
}Queue;

void enqueue(Queue *q,int item)
{
    if((q->tail+1) % (Q_size+1) == q->head)
    {
        printf("Queue is Full\n");
    }
    else
    {
        q->data[q->tail] = item;
        q->tail = (q->tail+1) % (Q_size+1);
    }
}
int dequeue(Queue *q)
{
    int item;
    if(q->tail == q->head)
    {
        printf("QUEUE IS empty\n");
        return -1;
    }
    item = q->data[q->head];
    q->head = (q->head+1) % (Q_size+1);
    return item;
}

int main()
{
    Queue q;
    q.head = 0;
    q.tail = 0;
    enqueue(&q,1);
    cout << "Tail : " << q.tail << endl;
    enqueue(&q,2);
    cout << "Tail : " << q.tail << endl;
    enqueue(&q,3);
    cout << "Tail : " << q.tail << endl;
    enqueue(&q,4);
    cout << "Tail : " << q.tail << endl;
    enqueue(&q,5);
    cout << "Tail : " << q.tail << endl;
    enqueue(&q,6);
    cout << "Tail : " << q.tail << endl;
    int item;
    item = dequeue(&q);
    cout << "Head : " << item << endl;
    item = dequeue(&q);
    cout << "Head : " << item << endl;
    item = dequeue(&q);
    cout << "Head : " << item << endl;
    item = dequeue(&q);
    cout << "Head : " << item << endl;
    item = dequeue(&q);
    cout << "Head : " << item << endl;
    item = dequeue(&q);
    cout << "Head : " << item << endl;
}
