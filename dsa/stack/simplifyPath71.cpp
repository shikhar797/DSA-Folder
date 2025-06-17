#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "/../";
    stack<char> st;
    int cDot = 0;
    int cSlash=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '.' && cDot == 3)
        {
            st.push('.');
            st.push('.');
            st.push('.');
            cDot=0;
            if(s[i]=='/') cSlash++;
        }
        else if (s[i] != '.' && cDot == 2)
        {
            st.pop();
            while(!st.empty()&&st.top()!='/') st.pop();
            st.pop();
            cDot=0;
            if(s[i]=='/') cSlash++;
        }
        else if (s[i] != '.' && cDot == 1)
        {
            st.pop();
            cDot=0;
            if(s[i]=='/') cSlash++;
            continue;
        }
        else if (s[i] != '/' && cSlash == 2)
        {
            st.push('/');
            if(isalpha(s[i])) st.push(s[i]);
            if(s[i]=='.') cDot++;
            cSlash=0;
        }
        else if (s[i] != '/' && cSlash == 1)
        {
            st.push('/');
            if(isalpha(s[i])) st.push(s[i]);
            if(s[i]=='.') cDot++;
            cSlash=0;
        }
        else if(s[i]=='/') cSlash++;
        else if(s[i]=='.') cDot++;
        else {
            st.push(s[i]);
        }
        
    }
    string res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(),res.end());
    cout<<res;
    return 0;
}

// "/picture" -->result of above string