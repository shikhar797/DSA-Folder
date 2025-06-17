#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int coff;
    int expo;
    struct node *next;
}node;
typedef struct linkedList{
    node *head;
}linkedList;
linkedList *createLL(){
    linkedList *LL=(linkedList*)malloc(sizeof(linkedList));
    LL->head=NULL;
    return LL;
}
node *createNode(int coff,int expo){
    node *newNode=(node *)malloc(sizeof(node));
    newNode->coff=coff;
    newNode->expo=expo;
    newNode->next=NULL;
    return newNode;
}
void addNode(linkedList *LL,int coff,int expo){
    node *newNode=createNode(coff,expo);
    if(LL->head==NULL){
        LL->head=newNode;;
        return;
    }
    node *curr=LL->head;
    node*prev=NULL;
    while(curr!=NULL && curr->expo>expo){
        prev=curr;
        curr=curr->next;
    }
    if(curr!=NULL && curr->expo==expo){
        curr->coff+=coff;
        free(newNode);
        return;
    }
    if (prev == NULL) {
        newNode->next = LL->head;
        LL->head = newNode;
    } 
    else {
        prev->next=newNode;
        newNode->next=curr;
    }
}
linkedList *addPolynomial(linkedList *LL_1, linkedList *LL_2) {
    node *temp1 = LL_1->head;
    node *temp2 = LL_2->head;
    linkedList *res = createLL();

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->expo > temp2->expo) {
            addNode(res, temp1->coff, temp1->expo);
            temp1 = temp1->next;
        } else if (temp2->expo > temp1->expo) {
            addNode(res, temp2->coff, temp2->expo);
            temp2 = temp2->next;
        } else { // Exponents are equal
            addNode(res, temp1->coff + temp2->coff, temp1->expo);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    while (temp1 != NULL) {
        addNode(res, temp1->coff, temp1->expo);
        temp1 = temp1->next;
    }
    while (temp2 != NULL) {
        addNode(res, temp2->coff, temp2->expo);
        temp2 = temp2->next;
    }
    return res;
}

void print(linkedList *LL){
    if(LL->head==NULL){
        printf("Polynomial Linked List is empty");
        return;
    }
    node *temp=LL->head;
    while(temp){
        printf("%dx^%d+",temp->coff,temp->expo);
        temp=temp->next;
    }
}
int main(){
    linkedList *LL_1=createLL();
    addNode(LL_1,5,3);
    addNode(LL_1,3,2);
    addNode(LL_1,7,4);
    addNode(LL_1,3,2);
    linkedList *LL_2=createLL();
    addNode(LL_2,5,3);
    addNode(LL_2,3,2);
    addNode(LL_2,7,4);
    addNode(LL_2,3,2);
    linkedList *res=addPolynomial(LL_1,LL_2);
    print(res);
    
    return 0;
}