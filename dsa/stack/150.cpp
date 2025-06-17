#include <bits/stdc++.h>
using namespace std;
int operation(int a, int b, char c)
{
    if (c == '+')
    {
        return a + b;
    }
    else if (c == '-')
    {
        return a-b;
    }
    else if (c == '/')
    {
        return b/a;
    }
    else if (c == '*')
    {
        return a * b;
    }
    return -1;
}

int main(){
    vector<string>s={"1","2","3","*","-","-4"};
    stack<int>st;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i][0])){
            int a=stoi(s[i]);
            st.push(a);
        }
        else if(s[i].size()>1&&isdigit(s[i][1])){
            int a=stoi(s[i]);
            st.push(a);
        }
        else{
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            int res=operation(a,b,s[i][0]);
            st.push(res);
        }
    }
    cout<<st.top();
return 0;
}