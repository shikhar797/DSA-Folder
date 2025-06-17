#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

typedef struct deque{
    node *front;
    node *rear;
}deque;
node *createNode(int data){
    node *newNode=(node *)malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
deque *createDq(){
    deque *dq=(deque*)malloc(sizeof(deque));
    dq->front=dq->rear=NULL;
    return dq;
}
void enqueFromRear(deque *dq,int data){
    node *newNode=createNode(data);
    if(dq->front==NULL){
        dq->front=dq->rear=newNode;
        return;
    }
    dq->rear->next=newNode;
    dq->rear=dq->rear->next;
}
void enqueFromFront(deque *dq,int data){
    node *newNode=createNode(data);
    if(dq->rear==NULL){
        dq->front=dq->rear=newNode;
        return;
    }
    newNode->next=dq->front;
    dq->front=newNode;
}
void traverseFromFront(deque *dq){
    if(dq->front==NULL){
        printf("deque is empty");
        return;
    }
    node *temp=dq->front;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    deque *dq=createDq();
    enqueFromFront(dq,10);
    enqueFromFront(dq,20);
    enqueFromRear(dq,30);
    traverseFromFront(dq);
    return 0;
}