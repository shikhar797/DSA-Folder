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

    return -1;
}
int operation(int a, int b, char c)
{
    if (c == '+')
    {
        return a + b;
    }
    else if (c == '-')
    {
        return b-a;
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
int main()
{
    string str = "78+96-38*40";
    stack<char> symbol;
    stack<int> val;
    int num=0;
    string s;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))  s=s+str[i]; 
        else
        {
            num = stoi(s);
            val.push(num);
            s.clear();
            if (symbol.empty())
            {
                symbol.push(str[i]);
            }
            else if (!symbol.empty() && check_precedence(str[i]) > check_precedence(symbol.top()))
            {
                symbol.push(str[i]);
            }
            else
            {
                while (!symbol.empty() && check_precedence(str[i]) <= check_precedence(symbol.top()))
                {
                    int a = val.top();
                    val.pop();
                    int b = val.top();
                    val.pop();
                    //operation(a, b, symbol.top());
                    val.push(operation(a, b, symbol.top()));
                    symbol.pop();
                }
                symbol.push(str[i]);
            }
        }
    }
    if (!s.empty()) { 
        num = stoi(s);
        val.push(num);
    }
    while (!symbol.empty())
    {
        int a =val.top() ;
        val.pop();
        int b = val.top();
        val.pop();
        val.push(operation(a, b, symbol.top()));
        symbol.pop();
    }
    cout << val.top();

    return 0;
}








//before changes
            //num = (str[i] - '0');
            //val.push(num); 