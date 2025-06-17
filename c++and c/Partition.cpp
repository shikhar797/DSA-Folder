#include<iostream>
using namespace std;             //Naive approach of partition 
int main(){
    int p=6,l=0,h=6;
    int arr[7]={453,243,234,463,62,2436,76};
    int arr1[7],j=0;
    for (int i = 0; i < 7; i++)
    {
           if (arr[i]<=arr[p])
           {
              arr1[j]=arr[i];
              j++;
           }
           
    }
    for (int i = 0; i < 7; i++)
    {
           if (arr[i]>arr[p])
           {
              arr1[j]=arr[i];
              j++;
           }
           
    }
    for(int x:arr1){
        cout<<x<<" ";
    }
    

return 0;
}