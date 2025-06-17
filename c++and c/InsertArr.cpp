#include<iostream>
using namespace std;
void prnt(int arr[],int n){
    for (int  i = 0; i <n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void insert(int arr[],int n,int x, int p,int cap){
    if(n==cap){
        cout<<"array if full now";
    }
    for (int i = cap; i >=p; i--)
    {
    arr[i]=arr[i-1];
    }
    arr[p-1]=x;
    prnt(arr,n);
    
    
}
int main(){
    int n=5,x,p,cap=4;
    int arr[n];
    for (int  i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element you want to insert";
    cin>>x;
    cout<<"enter the position you want to insert";
    cin>>p;   

    insert(arr,n,x,p,cap);
    
return 0;
}