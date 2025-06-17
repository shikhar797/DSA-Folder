#include<stdio.h>
#define MAX 5

int dq[MAX];
int front=-1;
int rear=-1;

int isEmpty(){
    if(front==-1) return 1;
    return 0;
}
int isFull(){
    return ((front==0 && rear==MAX-1)||(front==rear+1));
}
void insertFront(int val){
    if(isFull()){
        printf("overflow \n");
        return;
    }
    if(front==-1){
        front=rear=0;
    }
    else if(front==0) front=MAX-1;
    else front=front-1;
    dq[front]=val;
    printf("%d inserted from front\n",val);
}
void insertRear(int  val){
    if (isFull())
    {
        printf("overflow\n");
        return;
    }
    if(rear==-1){
        front=rear=0;
    }
    else if(rear==MAX-1) rear=0;
    else rear=rear+1;
    dq[rear]=val;
    printf("%d inserted from rear\n",val);
    
}
void deleteFront(){
    if(isEmpty()){
        printf("underflow\n");
        return;
    }
    int val=dq[front];
    if(rear==front){
        rear=front=-1;
    }
    else if(front==MAX-1) front=0;
    else front=front+1;
    printf("deleted %d from front\n",val);
}
void deleteRear(){
    if(isEmpty()){
        printf("underflow\n");
        return;
    }
    int val=dq[rear];
    if(rear==front){
        rear=front=-1;
    }
    else if(rear==0) rear=MAX-1;
    else rear=rear-1;
    printf("deleted %d from rear\n",val);
}
void display(){
    if(isEmpty()){
        printf("underflow\n");
        return;
    }
    if(front==0){
        printf("%d ",dq[front]);
        return;
    }
    int i=front;
    while(1){
        printf("%d ",dq[i]);
        if(i==rear)break;
        i=(i+1)%MAX;
    }
}
int main(){ 
    insertFront(10);
    insertRear(20);
    insertRear(30);
    insertFront(40);
    insertFront(50);
    insertFront(60);
    deleteFront();
    deleteRear();
    deleteFront();
    deleteRear();
    deleteFront();
    deleteRear();
    display();
    return 0;
}