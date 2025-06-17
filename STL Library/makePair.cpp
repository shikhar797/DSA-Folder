#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    pair<int,int>pr[t];
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        int b;
        cin>>b;
        pr[i]={a,b};
    }
    for(int i=0;i<t;i++){
        cout<<pr[i].first<<" "<<pr[i].second<<endl;
    }
return 0;
}