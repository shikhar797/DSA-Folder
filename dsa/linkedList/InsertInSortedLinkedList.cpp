#include "yug.h"
int main(){
    node *head=create();
    head=InsertInSorted(head,5);
    print(head);
}