#include <bits/stdc++.h>
using namespace std;
int main(){
    int c=0,v=0;
    string s="UDDUUDDDUU";
    for(int i=0;i<s.length();i++){
        if(s[i]=='D') v--;
        else if(s[i]=='U') v++;
        if(v==0&&s[i]=='U') c++;
    }
    cout<<c;
return 0;
}