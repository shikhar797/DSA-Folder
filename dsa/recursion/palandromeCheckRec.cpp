// #include <iostream>
// using namespace std;
// int pal(int n)                 // this code is written using static variable
// {
//     static int a;
//     if (n == 0)
//         return 0;
//     a = a * 10 + n % 10;
//     pal(n / 10);
//     return a;
// }
// int main()
// {
//     int n, a = 0;
//     cin >> n;
//     if (n == pal(n))
//         cout << "its a palindrome";
//     else
//         cout << "it is not a palandrome number";
//     return 0;
// }



#include<iostream>
using namespace std;
bool pal(string s,int str,int end){        //here i convert a integer into string then check for palandrome
    if (str>=end)               
    {
        return true;
    }
    return (s[str]==s[end])&&pal(s,str+1,end-1);
    
}
int main(){

    // int n;
    // cin >> n;
    string s="shik";
    int end=s.length()-1;
    int str=0;
    if (pal(s,str,end))
        cout << "its a palindrome";
    else
        cout << "it is not a palandrome number";
    return 0;

return 0;
}
