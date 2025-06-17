#include <bits/stdc++.h>
using namespace std;
int check_precedence(char s1){
    if(s1=='*'||s1=='/'){
        return 2;
    }
    else if(s1=='+'||s1=='-'){
        return 1;
    }
    else if(s1=='('){
        return 0;
    }
    return -1;
}
int main(){
    string str="2+1+(2+2)";
    stack<char>s;
    string resukt="";

    for(int i=0;i<str.length();i++){
        if(str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/'&&str[i]!='('&&str[i]!=')'){
            cout<<str[i];
        }
        else {
            if (str[i] == '(') {
                s.push(str[i]);
            } 
            else if (str[i] == ')') {
                while (!s.empty() && s.top() != '(') {
                    cout << s.top();
                    s.pop();
                }
                if (!s.empty() && s.top() == '(') {
                    s.pop(); 
                }
            }
            
            if(s.empty()){
                s.push(str[i]);
            }
            else if(!s.empty() &&check_precedence(str[i])>check_precedence(s.top())){
                s.push(str[i]);
            }
            else {
                while (!s.empty() && check_precedence(str[i]) <= check_precedence(s.top())) {
                        cout << s.top();
                        s.pop();
                    }
                    s.push(str[i]);
                
            }
        }
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

return 0;
}