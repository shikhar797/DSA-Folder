#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int *ptr=arr;
    int s=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < s; i++)
    {
        /* code */
        *ptr=arr[i];
        *ptr=*ptr*2;
        
        cout<<*ptr<<" ";
    }
    

return 0;
}