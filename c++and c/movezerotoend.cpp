#include<iostream>
using namespace std;
int main(){
    int len,c=0;
    int arr[]={8,5,0,0,10,0,12};
    len=sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < len; i++)
    {
        if (arr[i]!=0)
        {
            int a=arr[i];
            arr[i]=arr[c];
            arr[c]=a;
            c++;

        }
        
    }
    for(int x:arr){
        cout<<x<<" ";

    }
    
return 0;
}