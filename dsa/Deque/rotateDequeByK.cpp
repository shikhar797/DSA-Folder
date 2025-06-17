#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq={1,2,3,4,5,6};
    int dir=2;        // 1 for clockwise direction and 2 for anti clock wise direction
    int k=2;          //how many times you want to rotate it
    if(dir==1){
        while(k){
            int a=dq.back();
            dq.pop_back();  
            dq.push_front(a);
            k--;
        }
    }
    if(dir==2){
        while(k){
            int a=dq.front();
            dq.pop_front();
            dq.push_back(a);
            k--;
        }
    }
    for(auto x:dq){
        cout<<x<<" ";
    }

return 0;
}