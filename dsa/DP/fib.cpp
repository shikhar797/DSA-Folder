#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={0,1};
    for(int i=2;i<=5;i++){
        v.push_back(v[i-1]+v[i-2]);
    }
    cout<<v[5];
return 0;
}