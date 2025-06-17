#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack[MAX];
int tos=-1;

void PUSH(int val){
    if((tos+1)==MAX){
        printf("OverFlow \n");
        return;
    }
    tos++;
    stack[tos]=val;
}
void POP(){
    if(tos==-1){
        printf("UnderFlow \n");
        return;
    }
    tos--;
}
void PEEK(){
    if(tos==-1){
        printf("UnderFlow \n");
        return;
    }
    printf("%d ",stack[tos]);
}
int main(){
    PUSH(1);
    // PUSH(2);
    // PUSH(1);
    // PUSH(2);
    // PUSH(1);
    // PUSH(1);
    // PUSH(2);
    // PEEK();
    // POP();
    // POP();
    // PEEK();
    // PEEK();
    return 0;
}