// #include <stdio.h>
// int main() {

//     int n,c=0;
//     scanf("%d",&n);
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[i+1]&&(i+1)<n){
//             int a=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=a;
//             c++;
//             i=-1;                 //here it will will increase time complexcity so it is wrong code
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf(" \n%d",c);
//     return 0;
// }
#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for (int i = 1; i < n-1; i++)
    {
        if (arr[i]<arr[i-1])
        {
            int a=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=a;
            i--;
        }
        else if (arr[i]>arr[i+1])
        {
            int b=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=b;
            i--;
        }
        
    }
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
        int n=8;
        int arr[n]={12,232,343,23,2,2,32,312};   

    sort(arr,n);
  


return 0;
}
