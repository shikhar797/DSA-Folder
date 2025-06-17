#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,0,0,0,0,0,1};
    int c=0,f=1,l=1;
    int len=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0,j=len-1; i<=j;i++)
    { 
        if(arr[i]==1&&f==1) f=0;
            
        if(arr[j]!=1&&l==1) j--;
        
        if(arr[j]==1&&l==1){
            j--;
            l=0;
        }
        if(f+l==0&&arr[i]==0)   c++;
            

    }
    cout<<c;
    
    
return 0;
}