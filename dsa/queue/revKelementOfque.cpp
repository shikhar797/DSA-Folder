#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    stack<int>s;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    int k=5;
    int sz=q.size()-k;
    while(k){
        s.push(q.front());
        q.pop();
        k--;
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    while(sz){
        int a=q.front();
        q.pop();
        q.push(a);
        sz--;
    }
    for(int i=0;i<7;i++){
        cout<<q.front()<<" ";
       q.pop();
    }

return 0;
}