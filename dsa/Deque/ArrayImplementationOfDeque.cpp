#include <bits/stdc++.h>
using namespace std;
bool isFull(int size,int cap){
    if(size==cap) return true;
    return false;
}
bool isEmpty(int size){
    if(size==0) return true;
    return false;
}
void insertRear(int arr[],int &size,int cap,int key){
    if(isFull(size,cap)){
        cout<<"deque is full"<<endl;
        return;
    }
    arr[size]=key;
    size++;
}
void insertFront(int arr[],int &size,int cap,int key){
    if(isFull(size,cap)){
        cout<<"array is full"<<endl;
        return;
    }
    for (int i =size-1; i >=0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0]=key;
    size++;

}
void deletFront(int arr[],int &size,int cap){
    if(isEmpty(size)){
        cout<<"array is empty"<<endl;
        return;
    }
    for (int i = 0; i < size- 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}
void deletRear(int arr[],int &size,int cap){
    if(isEmpty(size)){
        cout<<"array is empty"<<endl;
        return;
    }
    size--;
}
void getFront(int arr[],int &size,int cap){
    if(isEmpty(size)){
        cout<<"array is empty"<<endl;
        return;
    }
    cout<<arr[0];

}
void getRear(int arr[],int &size,int cap){
    if(isEmpty(size)){
        cout<<"array is empty"<<endl;
        return;
    }
    cout<<arr[size-1];

}
int main(){
    int cap=5;
    int arr[cap];
    int size=0;
    insertFront(arr,size,cap,10);
    insertRear(arr,size,cap,20);
    getRear(arr,size,cap);




return 0;
}