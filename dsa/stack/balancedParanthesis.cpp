#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c1 = 0, c2 = 0;
    string s = "{()])}";
    stack<char> c;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{')
        { 
            c.push(s[i]);
            c1++;
        }
        else
        {
            if (c.empty())
            {
                cout << "not balanced";
                return 0;
            }
            if ((s[i] == ']' && c.top() != '[') || (s[i] == ')' && c.top() != '(') || (s[i] == '}' && c.top() != '{'))
            {
                cout << "not balanced";
                return 0;
            }
            c.pop();
            c2++;
        }
    }
    if (c2 != c1)
    {
        cout << "not balanced";
        return 0;
    }
    cout << "balanced";

    return 0;
}