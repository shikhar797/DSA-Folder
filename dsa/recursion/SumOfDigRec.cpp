// #include<iostream>
// using namespace std;
// int sum(int n){
//     static int a=0;
//     if (n==0)
//     {
//         return a;
//     }
//     a=a+n%10;
//     sum(n/10);
    

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
// return 0;
// }

#include<iostream>
using namespace std;
int sum(int n){
    if(n<10)
    return n;
    return sum(n/10)+n%10;
}
int main(){
    int n;
    cin>>n;
   cout<<sum(n);
return 0;
}