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
        return b - a;
    }
    else if (c == '/')
    {
        return b / a;
    }
    else if (c == '*')
    {
        return a * b;
    }
    return -1;
}
int main()
{
    string str = "21+2+2+";
    stack<int> val;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            int num = (str[i] - '0');
            val.push(num);
        }
        else
        {
            int a = val.top();
            val.pop();
            int b = val.top();
            val.pop();
            val.push(operation(a, b, str[i]));
        }
    }
    cout<<val.top();
    return 0;
}