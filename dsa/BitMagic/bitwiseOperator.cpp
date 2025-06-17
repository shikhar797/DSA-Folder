#include <bits/stdc++.h>
using namespace std;
int main(){
    int x=3,y=6;
    cout<<(x&y)<<endl;    //bitwise AND
    cout<<(x|y)<<endl;    //bitwise OR
    cout<<(x^y)<<endl;    //bitwise XOR ->if same then output is zero else output is one
    cout<<(2<<2)<<endl;   //left shift  ->if we assume that leading bits are zero then result of (x<<y) is equivalent to x*pow(2,y)
    cout<<(31>>1)<<endl;  //right shift ->(x>>y) is equivalent to [x/(pow(2,y))]
    cout<<(~2)<<endl;     //bitwise not
return 0;
}