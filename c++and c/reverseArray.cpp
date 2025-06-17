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
    for (int i = 0,j=len-1; i < len/2,j>=len/2; i++,j--)
    {
        int s =arr[i];
        int e=arr[j];

        arr[j]=s;
        arr[i]=e;
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    
return 0;
}