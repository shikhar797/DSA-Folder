#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={0,1,2,3,4,5,6,7};
    int n;
    if(v.size()%2==0){
        n=v.size()/2;
    }
    else  n=v.size()/2+1;
    vector<pair<int,int>>pr(n);
    
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        pr[i]={v[i],v[j]};
    }
    for(int i=0;i<pr.size();i++){
        cout<<pr[i].first<<" "<<pr[i].second<<endl;
    }
return 0;
}