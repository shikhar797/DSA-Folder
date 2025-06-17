#include <bits/stdc++.h>
using namespace std;
int main(){
    int c1=0,c2=0;
    int arr[]={42,1,535,64,532346,3,53,3524,42,3,21};
    int x=42;
    int y=3;
    int f=0;
    int min=INFINITY;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==x&&f==0) f=1;
        else if(f) c1++;
        if(arr[i]==y) {
            if(min>c1) min=c1;
            c1=0;
            f=0;
        }
    }
    cout<<min;
return 0;
}