#include<stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
typedef struct queue{
    node *front;
    node *rear;
}queue;
node *createNode(int data){
    node *newNode=(node*)malloc(sizeof(node));
    if(newNode==NULL) return NULL;
    newNode->data=data;
    newNode->next=NULL;
    return newNode;

}
queue *createQueue(){
    queue *newQueue=(queue *)malloc(sizeof(queue));
    newQueue->front=newQueue->rear=NULL;
    return newQueue;
}
void enque(queue *q,int data){
    node *newNode=createNode(data);
    if(q->rear==NULL){
        q->front=q->rear=newNode;
    }

    q->rear->next=newNode;
    q->rear=q->rear->next;
    
}
void print(queue *q){
    if(q->front==NULL){
        printf("Queue is empty");
        return;
    }
    node *temp=q->front;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void deque(queue *q){
    if(q->front==NULL){
        printf("UnderFlow condition");
        return;
    }
    node *temp=q->front;
    q->front=q->front->next;
    free(temp);
}
void peek(queue *q){
    if(q->front==NULL){
        printf("\nQueue is empty");
        return ;
    }
    printf("\nFront of the queue is %d",q->front->data);
}
int main(){
    queue *q=createQueue();
    enque(q,10);
    enque(q,20);
    enque(q,30);
    deque(q);
    print(q);
    peek(q);
}