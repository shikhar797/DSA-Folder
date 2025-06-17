#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int arr[]={132,2,3,12,3,21,42};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int min=INFINITY;
//     for(int i=0;i<len;i++){
//         for(int j=i+1;j<len;j++){
//             int a=abs(arr[i]-arr[j]);
//                 if(a<min){
//                     min=a;
//                 }
            

//         }
//     }
//     printf("%d",min);
// return 0;
// }

//now using efficient solution that use nlogn time complexcity

int main(){
    int arr[]={132,3,12,21,42};
    int len=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len);
    int a=arr[1]-arr[0],b;
    for(int i=1;i<len;i++){
        b=abs(arr[i]-arr[i-1]);
        if(a>b){
            a=b;
        }
    }
    cout<<a;
    
}
//this work in time complexcity nlon 