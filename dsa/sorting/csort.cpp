#include <bits/stdc++.h>
using namespace std;
void cSort(int arr[],int n){
    int m=*max_element(arr,arr+n);
    int carr[m+1]={0};
    for(int i=0;i<n;i++){
        carr[arr[i]]++;
    }
    int n1=sizeof(carr)/sizeof(carr[0]);
    for(int i=1;i<=m;i++){
        carr[i]=carr[i-1]+carr[i];
    }
    int index=0;
    int res[n]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<carr[i];j++){
            res[index]=i;
            index++;
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=res[i];
    }
}
int main(){
    int arr[]={1,3,3,4,4,1,2,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}