#include<iostream>
#include<string>
using namespace std;
void pal(string s,int st,int end){
    if (st>=end){
    cout<<"its a pal";
    return;
    }
    if (s[st]==s[end])
    {
        pal(s,st+1,end-1);
    }
    else{
        cout<<"its not a pal";
        return;
    }
}
int main(){
    int  st=0,end=1;
    pal("ab",st,end);
return 0;
}