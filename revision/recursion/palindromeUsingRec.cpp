#include <bits/stdc++.h>
using namespace std;
bool pal(string s,int l,int i){
    if(s[i]==s[l-1]) return true;
    else return false;
    return pal(s,l-1,i+1);
}
int main(){
    cout<<pal("sssh",4,0);
return 0;
}