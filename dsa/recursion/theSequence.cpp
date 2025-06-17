#include <bits/stdc++.h>
using namespace std;
int seq(int n){
    if(n==0) return 1;
    return n+n*seq(n-1);
}
int main(){
    cout<<seq(4);
return 0;
}