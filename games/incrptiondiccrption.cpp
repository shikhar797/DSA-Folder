#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello";
    string encrip="jhnoq";
    string decript;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         int a = s[i] + 2;
    //         encrip.push_back(char(a));
    //     }
    //     else
    //     {
    //         int a=s[i]+3;
    //         encrip.push_back(char(a));
    //     }
        
    // }
    //cout<<encrip<<endl;
    for (int i = 0; i < encrip.size(); i++)
    {
        if (i % 2 == 0)
        {
            int a = encrip[i] - 2;
            decript.push_back(char(a));
        }
        else
        {
            int a=encrip[i]-3;
            decript.push_back(char(a));
        }
        
    }
    cout<<decript;
    return 0;
}