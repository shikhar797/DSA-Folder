#include<iostream>
using namespace std;
int main(){
    int len,c=0;
    int val=2;
    int arr[]={32,32,34,32,4,43};
    len=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        if (arr[i]==val)
        {
            c=i;
        }
        if (arr[i]!=val)
        {
            arr[c]=arr[i];
        }   
        
        
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    
return 0;
}