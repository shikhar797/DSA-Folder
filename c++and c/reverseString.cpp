#include<iostream>
using namespace std;
int main(){
    string name="shikhar";
    int len=name.length()-1;
    for (int i = len; i >=0; i--)
    {
        /* code */
        cout<<name[i];
    }
    
return 0;
}