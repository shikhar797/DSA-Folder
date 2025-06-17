#include <bits/stdc++.h>
using namespace std;
int main(){
    // priority_queue<int>pq;
    //for inserting priority queue element inn assecding order
    // priority_queue<int,vector<int>,greater<int>>pq;
    // int arr[]={132213,213,213,21,3224}; 
    // priority_queue<int>pq(arr,arr+5); //this will take time complexcity of O(n) only for array

    vector<int> arr={1,1,2,3}; 
    priority_queue<int>pq(arr.begin(),arr.end());


    // pq.push(10);
    // pq.push(1);
    // pq.push(20);=
    int a=pq.top()-1;
    pq.pop();
    pq.push(a);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }3333333333333333
return 0;
}