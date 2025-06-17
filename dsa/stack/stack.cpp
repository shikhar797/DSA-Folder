#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    cout<<s.top();
    s.pop();
    cout<<s.top();
    s.pop();
    if(s.empty) cout<<"stack is empty";
    else cout<<"stact is not empty";
return 0;
}