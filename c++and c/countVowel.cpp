#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s1={'a','e','i','o','u','A','E','I','O','U'};
    string s2={"file:///C:/Users/gshik/OneDrive/Desktop/alternating%20current.pdf"};
    string s3;
    int len=s2.length();
    for(int i=0;i<len;i++){
        for(int j=0;j<10;j++){
            if(s2[i]==s1[j]){
                count++;
                cout<<s2[i]<<" ";
                break;
            }
        }
    }
    cout<<count;

return 0;
}