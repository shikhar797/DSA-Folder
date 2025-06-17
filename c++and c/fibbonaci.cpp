#include<iostream>
using namespace std;
// int fibonnaci(int n){
//     if (n<2){
//         return 1;

//     }
//     else if(n>2){
//         return (fibonnaci(n-1) + fibonnaci(n-2)); 
//     }
//     else{
//         cout<<"error";
//     }

    
    

// }
// int main(){
//     int a=5;
//     cout<<fibonnaci(a);

// return 0;
// }
int fibonnaci(int n){

    int a=0,b=0,c=1;
    if(n==1){
        cout<<"0";
    }
    else if(n==2){
        cout<<1;
    }
    else if(n>2){
            for(int i=0;i<n-2;i++){
            a=b;
            b=c;
            c=a+b;
        }
        cout<<c;
    }
    else{
        cout<<"You enter invalid position.";
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    fibonnaci(n);
    return 0;
}