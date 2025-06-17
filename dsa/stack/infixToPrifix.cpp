#include <bits/stdc++.h>
using namespace std;
int check_precedence(char s1)
{
    if (s1 == '*' || s1 == '/')
    {
        return 2;
    }
    else if (s1 == '+' || s1 == '-')
    {
        return 1;
    }
    else if (s1 == '(')
    {
        return 0;
    }
    return -1;
}
int main()
{
    string str = "2+5*4/2";
    stack<char> s;
    string result = "";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/' && str[i] != '(' && str[i] != ')')
        {
            result = result + str[i];
        }
        else
        {
            if (str[i] == ')')
            {
                s.push(str[i]);
            }
            else if (str[i] == '(')
            {
                while (!s.empty() && s.top() != '(')
                {
                    result = result + s.top();
                    s.pop();
                }
                if (!s.empty() && s.top() == '(')
                {
                    s.pop();
                }
            }

            if (s.empty())
            {
                s.push(str[i]);
            }
            else if (!s.empty() && check_precedence(str[i]) > check_precedence(s.top()))
            {
                s.push(str[i]);
            }
            else
            {
                while (!s.empty() && check_precedence(str[i]) < check_precedence(s.top()))
                {
                    result = result + s.top();
                    s.pop();
                }
                s.push(str[i]);
            }
        }
    }
    while (!s.empty())
    {
        result = result + s.top();
        s.pop();
    }
    reverse(result.begin(), result.end());
    cout << result;

    return 0;
}