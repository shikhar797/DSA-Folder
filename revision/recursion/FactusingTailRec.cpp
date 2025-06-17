#include <bits/stdc++.h>
using namespace std;
int fact(int n,int k,int res){
    if(k>n) return res;
    return fact(n,k+1,res*k);

}
int main(){
    cout<<fact(0,1,1);
return 0;
}