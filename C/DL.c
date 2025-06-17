#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*prev;
    struct node*next;
}node; 
typedef struct DoublyLinkedList{
    node *head;
}DoublyLinkedList;

DoublyLinkedList *createDL(){
    
}

node *createNode(int val){
    node *newNode=(node *)malloc(sizeof(node));
    
}