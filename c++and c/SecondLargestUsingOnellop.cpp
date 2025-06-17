#include<iostream>     
using namespace std;
// int seclar(int arr[],int n){         
//     int lar=arr[0],slar=-1;
//     for (int i = 1; i < n; i++)
//     {
//         if(arr[i]>lar){
//             slar=lar;
//             lar=arr[i];
            
//         }  
//         else if(arr[i]<lar&&slar<arr[i])        
//         slar=arr[i];
//     }
//     return slar;
    
// }
int seclar(int arr[],int n){
    int lar=0,sclar=-1;
    for(int i=0;i<n;i++){
        if(arr[lar]<arr[i]){
            sclar=lar;
            lar=i;
        }
        else if(arr[i]<arr[lar]&&arr[i]>sclar){
            sclar=arr[i];
        }
    }
    return sclar;
}
int main(){
    int n=5;
    int arr[n]={5,20,12,20,8};
    int i=seclar(arr,n);
    if (i==-1){
        cout<<"no largest value";
    
    }
    else
    cout<<i;
    return 0;
}
