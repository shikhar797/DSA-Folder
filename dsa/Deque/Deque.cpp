#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_back(40);
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    auto it=dq.begin();
    dq.insert(it,5);
    cout<<dq.front()<<endl;
    dq.pop_front();
    cout<<dq.size();
return 0;
}