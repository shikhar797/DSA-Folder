#include<iostream>
using namespace std;
int main(){
    int arr[]={10,15,20,40,8,11,55};
    int len=sizeof(arr)/sizeof(arr[0]);
    int arr1[len];
    int low=0,mid=3,high=6;
    int i=low,j=mid+1,a=0;
    while (i<=mid&&j<=high)
    {
        if(arr[i]>arr[j]){
            arr1[a]=arr[j];
            j++;
            a++;
        }
        else{
            arr1[a]=arr[i];
            i++;
            a++;
        }
    }
    while(i<=mid){
        arr1[a]=arr[i];
        a++;
        i++;
    }
    while(j<=high){
        arr1[a]=arr[j];
        a++;
        j++;
    }
    for(int v:arr1){
        cout<<v<<" ";
    }
    
return 0;
}