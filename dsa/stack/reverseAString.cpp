#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="hello";
    stack<int>st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    for(int i=0;i<s.size();i++){
        s[i]=st.top();
        st.pop();
    }
    cout<<s;

return 0;
}