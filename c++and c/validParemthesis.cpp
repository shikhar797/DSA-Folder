#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="))";
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='['||s[i]=='('||s[i]=='{') st.push(s[i]);
        else if((st.top()=='['&&s[i]==']')||(st.top()=='('&&s[i]==')')||(st.top()=='{'&&s[i]=='}')) st.pop();
    }
    if(st.empty())  cout<<"valid";
    else cout<<"not valid";  
return 0;
}