#include <bits/stdc++.h>
using namespace std;
int main(){
    //search the smallest element in rotated sorted array
    vector<int>v={4,5,6,7,0,1,2,3};
    int target=0;
    int l=0,r=v.size()-1;
    while(l<=r){
        int m=(l+r)/2;
        if(v[m]>v[r]) l=m+1;
        else r=m-1;
    }
    cout<<v[l];
return 0;
}