#include <bits/stdc++.h>
using namespace std;
int sum(int n,int a,int b,int c){
    if(n==1) return a;
    else if(n==2) return b;
    else if(n==3) return c;
    return sum(n-1,a,b,c)+sum(n-2,a,b,c)+sum(n-3,a,b,c);
    // if(n==0)return c;
    // if(n==-2)return a;
    // if(n==-1)return b;
    // return sum(n-1,b,c,a+b+c);

 
}
int main(){
    int n=5;
    int a=2,b=2,c=4;
    cout<<sum(n,a,b,c);
    
    
return 0;
}