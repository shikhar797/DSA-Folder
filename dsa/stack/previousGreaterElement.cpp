#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={15,10,18,12,4,6,2,8};
    vector<int>res;
    stack<int>s;
    bool flag=true;
    for(int i=0;i<v.size();i++){
        if(flag){
            s.push(v[i]);
            res.push_back(-1);
            flag=false;
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
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
return 0;
}