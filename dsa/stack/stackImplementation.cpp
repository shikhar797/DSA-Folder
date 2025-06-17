#include <bits/stdc++.h>
using namespace std;
void insert(vector<int>&v,int &top,int key){
    (top++);
    //cout<<*top<<" ";
    v.push_back(key);
}
void pop(vector<int>&v,int &top){
    (top--);
    v.pop_back();
}
void peak(vector<int>&v,int &top){
    cout<<v[top]<<endl;
}
void isempty(vector<int>&v,int &top){
    if(v.empty()){
        cout<<"vector is empty"<<endl;
    }
    else 
    cout<<"vector is not empty"<<endl;
}
int main(){
    vector<int>v;
    int top=-1;
    insert(v,top,10);
    insert(v,top,20);
    insert(v,top,30);
    pop(v,top);
    peak(v,top);
    isempty(v,top);
return 0;
}