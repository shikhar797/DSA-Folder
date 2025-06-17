#include <bits/stdc++.h>
using namespace std;
void print(int n,int k){
if(k>n) return;
cout<<k<<" ";
print(n,k+1);
}
int main(){
    print(10,1);
return 0;
}