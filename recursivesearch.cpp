#include <bits/stdc++.h>
using namespace std;
int bs(const vector<int> &v,int l,int h,int key){
    if (l>h) return -1;
    int m=(l+h)/2;
    if(v[m]==key) return m;
    else if(v[m]<key) bs(v,m+1,h,key);
    else bs(v,l,m-1,key);
}
int main(){
    int n;
    cin>> n;
    int l=0,h=n-1;
    int key=10;
    vector<int> v(n);
    for (auto &p: v)
    {
        cin>>p;
    }
    cout<<bs(v,l,h,key);
    
return 0;
}