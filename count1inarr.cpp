#include <bits/stdc++.h>
using namespace std;
int fo(const vector<int> &v,int l,int h,int key){
    static int t=-1;
    if (l>h) 
    return -1;

    int m=(l+h)/2;

    if(v[m]==key){
        t=m;
        fo(v,m+1,h,key);
        
    }

    else if(v[m]<key) 
    fo(v,m+1,h,key);

    else 
    fo(v,l,m-1,key);

    return t;
    
}
int main(){
    int n;
    cin>> n;
    int l=0,h=n-1;
    int key=0;
    vector<int> v(n);
    for (auto &p: v)
    {
        cin>>p;
    }
    if(fo(v,l,h,key)==-1){
    cout<<n;
    return 0;
    }
    cout<<(n-1)-fo(v,l,h,key);
return 0;
}