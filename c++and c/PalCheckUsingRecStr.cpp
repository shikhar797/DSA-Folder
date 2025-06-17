#include<iostream>
using namespace std;
int c_pal(int *str,int s,int e){
    if(s>=e)
    return 1;
    return str[s]==str[e]&&c_pal(&str, s+1,e-1);
}
int main(){
    string a="abab";
    int b=c_pal(&str, s,e);

return 0;
}