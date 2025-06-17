#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    if (n<2){
        return 1;

    }
    else
    {
        return (fib(n-1) + fib(n-2)); 
    }


}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int a=fib(i);
        printf("%d ",a);
    }
return 0;
}