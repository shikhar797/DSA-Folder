#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int target=3;
    int l=0,h=len-1;
    int m=(l+h)/2;

    while (l<=h)
    {
        if (arr[m]==target)
        {
            cout<<"element is present at index:"<<m;
            return 0;
        }
        else if(arr[m]>target){
            h=m-1;
            m=(l+h)/2;
        }
        else{
            l=m+1;
            m=(l+h)/2;
        }
        
    }
    cout<<"element is not present in arrray";
    
    
    

    
    
return 0;
}