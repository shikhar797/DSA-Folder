#include<iostream>
using namespace std;

int sumdigit(int n){
    if(n<10)
    return n;
    return n%10+sumdigit(n/10);
}
int main(){
    int n,k;
    cout<<"enter the number";
    cin>>n;
    cout<<"enter the number of times";
    cin>>k;
    int a=sumdigit(n);
    while (a>9)
    {
        a=sumdigit(a);
    } 
    cout<<sumdigit(a*k);
return 0;
}