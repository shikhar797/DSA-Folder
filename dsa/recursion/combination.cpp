#include <bits/stdc++.h>
using namespace std;
 int fact(int n){
    if(n==0||n==1) return 1;
    return n*fact(n-1);
}
int c(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}
int main(){
    cout<<c(35,9);
return 0;
}

//find nCr