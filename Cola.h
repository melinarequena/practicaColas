//
// Created by Administrador on 14/6/2023.
//

#ifndef PRACTICACOLAS_COLA_H
#define PRACTICACOLAS_COLA_H

typedef struct node{
    char name[20];
    struct node * next;
}Node;

typedef struct queue{
    Node * head;
    Node * tail;
}Queue;

Node * newNode(char * name);
Queue * newQue();

void enque(Queue * queue, Node * nodeToQue);
void deque(Queue * queue);
void print(Queue * queue);

#endif //PRACTICACOLAS_COLA_H
