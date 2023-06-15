//
// Created by Administrador on 14/6/2023.
//

#include "Cola.h"
#include <stdio.h>
#include <malloc.h>
#include <string.h>


Node *newNode(char * name) {
    Node * aux = NULL;
    aux = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Eroror\n");
        exit (-1);
    }
    strcpy(aux->name, name);
    aux->next = NULL;

    return aux;
}

Queue *newQue() {
    Queue * aux = NULL;
    aux = malloc((sizeof (Queue)));
    if(aux == NULL){
        printf("Erororo");
        exit (-1);
    }
    aux->head = NULL;
    aux->tail = NULL;

    return aux;
}

void enque(Queue *queue, Node *nodeToQue) {
    if(queue->head == NULL){
        queue->head = nodeToQue;
        queue->tail = nodeToQue;
    }else{
        queue->tail->next = nodeToQue;
        queue->tail = nodeToQue;
    }
}

void deque(Queue *queue) {
    if(queue->head == NULL){
        printf("Queue is empty\n");
    }else{
        Node * aux = queue->head;
        queue->head = queue->head->next;
        free(aux);
    }
}

void print(Queue *queue) {
    Node * aux = queue->head;
    printf("\nQueue:\n");
    printf("NULL");
    while(aux != NULL){
        printf(" <- %s",aux->name);
        aux = aux->next;
    }
}

