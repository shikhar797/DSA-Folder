#include<iostream>
using namespace std;
int main(){
     int n = 9,a=0;
    int arr[n] = {2,4,3,1,5,7,6,14,3};
    for (int i = 0,j=n-1; i <= n/2,j>=n/2; i++,j--)
    {
        int a=arr[i];
        arr[i]=arr[j];
        arr[j]=a;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
return 0;
}