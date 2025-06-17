#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int len = (2 * n) - 1;
    int len1=len;
    int arr[len][len] = {0};
    int c=0;
    while(n){
        for(int i=c;i<len;i++)
            for(int j=c;j<len;j++)
                if(i==c||j==c||i==len-1||j==len-1) arr[i][j]=n;                        
        c++;
        len--;
        n--;
    }
    for(int i=0;i<len1;i++){
        for(int j=0;j<len1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}