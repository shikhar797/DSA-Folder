#include <bits/stdc++.h>
using namespace std;
int partion(int arr[],int low,int high){
    int i=low;
    int piviot=high;
    for(int j=low;j<high;j++){
        if(arr[j]<arr[piviot]){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[piviot]);
    return i;

}
void Qsort(int arr[],int low,int high){
    if(low<high){
        int p=partion(arr,low,high);
        Qsort(arr,low,p-1);
        Qsort(arr,p+1,high);
    }
}
int main(){
    int arr[]={1,1,3,1,21,1,123,132,21,232,34273,5436,322};
    int high=sizeof(arr)/sizeof(arr[0]);
    Qsort(arr,0,high-1);
    for(int i=0;i<high;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}