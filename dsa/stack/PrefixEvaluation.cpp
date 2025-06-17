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
        return a / b;
    }
    else if (c == '*')
    {
        return a * b;
    }
    return -1;
}
int main(){
    string str = "+2/*542";
    stack<int>s;
    for(int i=str.length()-1;i>=0;i--){
        if(isdigit(str[i])){
            int num = (str[i] - '0');
            s.push(num);
        }
        else {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop(); 
            s.push(operation(a,b,str[i]));
        }
    }
    cout<<s.top();

return 0;
}