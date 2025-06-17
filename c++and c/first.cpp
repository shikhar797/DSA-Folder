#include<iostream>
using namespace std;
// int main(){
//     int i=921, j;
//     while (i>0)
//     {
//         /* code */
//         j=i%10;
//         i=i/10;
//     }
//     cout<<j;    
// return 0;
// }
int main(){
    string a;
    int b;
    cout<<"Enter a number:";
    cin>>a;
    a=a[0];
    b=stoi(a);
    cout<<a;
    return 0;
}