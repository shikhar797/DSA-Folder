#include <bits/stdc++.h>
using namespace std;
int sum(int n,int k){
    if(n==1) return k;
    return sum(n-1,k+n);
}
int main(){
    cout<<sum(14,1);
return 0;
}