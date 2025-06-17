#include <bits/stdc++.h>
int check_precedence(char s1)
{
    if (s1 == '*' || s1 == '/') return 2;
    else if (s1 == '+' || s1 == '-') return 1;
    else if (s1 == '(') return 0;
    return -1;
}
using namespace std;
int main(){
    string s="5+5+5+6/2*3";
    stack<char>c;
    stack<int>i;        
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            i.push();
        }
        else{
            c.push();
        }
    }
return 0;
}