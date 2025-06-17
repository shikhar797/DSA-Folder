#include<iostream>
using namespace std;
int  factorial(int n){
    if (n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

}
int main(){
    int a;
    cout<<"enter a number \n";
    cin>>a;
    cout<<"factorial of "<<a<<" is "<< factorial(a);
return 0;
}