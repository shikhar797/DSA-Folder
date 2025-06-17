#include <bits/stdc++.h>
using namespace std;
bool mn(deque<int>&dq,int key){
    if(dq[0]<key) return false;
    return true;

}
bool mx(deque<int>&dq,int &size,int key){
    if(dq[size-1]>key) return false;
    return true;
}
bool isEmpty(int size){
    if(size==0) return true;
    return false;
}
void insertMin(deque<int>&dq,int &size,int key){
    if(!mn(dq,key)){
        cout<<"cannot insert the element"<<endl;
        return;
    }
    dq.push_front(key);
    size++;
}
void insertMax(deque<int>&dq,int &size,int key){
    if(!mx(dq,size,key)){
        cout<<"cannot insert the element"<<endl;
        return;
    }
    dq.push_back(key);
    size++;

}
void getMin(deque<int>&dq,int &size){
    if(isEmpty(size)){
        cout<<"deque is empty"<<endl;
        return;
    }
    cout<<dq[0];

}
void getMax(deque<int>&dq,int &size){
    cout<<dq[size-1];

}
void extracMin(deque<int>&dq,int &size){
    if(isEmpty(size)){
        cout<<"cannot extract because it is empty"<<endl;
        return;
    }
    dq.pop_front();

}
void extractMax(deque<int>&dq,int &size){
    dq.pop_back();
}
int main(){
    deque<int>dq;
    int size=0;
    insertMin(dq,size,5);
    insertMin(dq,size,4);
    insertMin(dq,size,6);
    insertMax(dq,size,10);
    insertMax(dq,size,7);
    insertMax(dq,size,30);

return 0;
}