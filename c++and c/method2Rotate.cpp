#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6};
    int k=3;
    reverse(v.begin(),v.end());
    reverse(v.begin()+k,v.end());
    reverse(v.begin()+3,v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
return 0;
} 