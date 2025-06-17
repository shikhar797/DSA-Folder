#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={15,13,12,14,16,8,6,4,10,30};
    stack<int>s;
    vector<int>res;
    for(int i=0;i<v.size();i++){
        int c=1;
        if(s.empty()){
            s.push(i);
            res.push_back(1);
        } 
        else{
            if(v[s.top()]>v[i]){
                s.push(i);
                res.push_back(1);
            }
            else {
                while(!s.empty()&&v[s.top()]<=v[i]){
                    s.pop();
                    c++;
                }
                if(s.empty()==true) res.push_back(i+1);
                else res.push_back(c);
                s.push(i);
                
            }
        }
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
return 0;
}