#include "yug.h"
int main(){
    node *head=create();
    node *curr=head;
    head=rev(curr);
    print(head);
}