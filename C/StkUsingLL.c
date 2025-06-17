#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
typedef struct  stack
{
   node *top;

}stack;
node *createNode(int data){
    node *newNode=(node *)malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
stack *createStack(){
    stack *newStack=(stack *)malloc(sizeof(stack));
    newStack->top=NULL;
    return newStack;
}
void push(stack *s,int data){
    node *newNode=createNode(data);
    if(s->top==NULL){
        s->top=newNode;
        return;
    }
    newNode->next=s->top;
    s->top=newNode;


}
void pop(stack *s){
    if(s->top==NULL){
        printf("cannot pop the item stack is empty");
        return ;
    }
    node *temp=s->top;
    s->top=s->top->next;
    free(temp);
}
void print(stack *s){
    if(s->top==NULL) {
        printf("\nStack is empty");
        return;
    }
    node *temp=s->top;
    while (temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    stack *s=createStack();
    push(s,10);
    push(s,20);
    print(s);
    pop(s);
    return 0;
}