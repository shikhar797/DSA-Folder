#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={432,24214,244,1242,21,14};
    int len=sizeof(arr)/sizeof(arr[0]);
    vector<pair<int,int>>v(len);
    for(int i=0;i<len;i++){
        v[i]={arr[i],i};
    }
    sort(v.begin(),v.end());
    for(int i=0;i<len;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
  

return 0;
}