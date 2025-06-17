#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in array";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int len=sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < len-1; i=i+2)
    {
        int a=arr[i];
        int b=arr[i+1];
        arr[i]=b;
        arr[i+1]=a;

    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
return 0;
}