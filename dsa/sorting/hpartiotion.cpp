#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,1,23,4,6,88,8,4,2};
    int h=sizeof(arr)/sizeof(arr[0])-1;
    int piviot=arr[0];
    int l=0;
    while(l<h){
        if(arr[l]<=piviot){
            
            l++;
        }
        if(arr[h]>piviot){ 
            h--;
        }
        if(arr[l]>piviot&&arr[h]<piviot){
            swap(arr[l],arr[h]);
        }
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    swap(piviot,arr[l]);
return 0;
}