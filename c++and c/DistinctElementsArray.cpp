#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,1,2};
    int s=sizeof(arr)/sizeof(arr[0]);
    int d=1;
    for (int i = 1; i < s; i++)
    {
        /* code */
       for (int j=i-1;j<i ;j++ )
       {
        /* code */
        if (arr[j]!=arr[i])
        {
            /* code */
            d=d+1;
        }
        
       }
       
        
    }
    
    printf("%d",d);
    
return 0;
}