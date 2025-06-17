#include<iostream>
using namespace std;
int main(){
    int len,c=1;
    int arr[]={1,1,2,2,2,3};
    len=sizeof(arr)/sizeof(arr[0]);
    int i=1;

    while (i<len)
    {
        if(arr[i]!=arr[i-1]){
            arr[c]=arr[i];
            c++;
        }
        i++;
    }
    
    for(int x:arr){
        cout<<x<<" ";

    }
    cout<<endl;
    cout<<c;
    
return 0;
}