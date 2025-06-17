#include "yug.h"
int main(){
    node *head=create();
    head=delDuplicate(head);
    print(head);
}