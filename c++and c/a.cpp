#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "cacc";
    string str1 = "aacc";
    // sort(str1.begin(),str1.end());
    // sort(str.begin(),str.end());
    //if(str1==str) cout<<"yes";
    int arr[26] = {0};
    int arr1[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        int b = str[i] - 'a';
        arr[b]++;
    }
    for (int i = 0; i < str1.length(); i++)
    {
        int c = str1[i] - 'a';
        arr1[c]++;
    }
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] != arr1[i])
        {
            cout << "not a anagram string" << endl;
            break;
        }
    }
    //cout<<"anagram string"<<endl;
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
    for(int x:arr1) cout<<x<<" ";
    return 0;
}

// by SIDDHARTH BAGHEL