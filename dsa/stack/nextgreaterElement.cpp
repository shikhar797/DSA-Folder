#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={5,15,10,8,6,12,9,18};
    vector<int>res;
    stack<int>s;
    for(int i=v.size()-1;i>=0;i--){
        if(s.empty()){
            s.push(v[i]);
            res.push_back(-1);
        }
        else {
            while(!s.empty()&&s.top()<v[i]){
            s.pop();
        }
        if(s.empty()) res.push_back(-1);
        else {
            res.push_back(s.top());
        }
        s.push(v[i]);
        }
        
    }
    for(int i=res.size()-1;i>=0;i--){
        cout<<res[i]<<" ";
    }
return 0;
}