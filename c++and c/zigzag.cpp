#include <iostream>
using namespace std;
int main()
{
    int n = 9, a = 0;
    int arr[n] = {243,2,121,4,532,325,23,12,12}; // 1,2,3,4,5,9,8,7,6   //11,2,3,4,5,6,7,8,9
    for (int i=0;i<n-1;i=i+2)
    {
if (arr[i]>arr[i+1])
{
    int a=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=a;
}
if (arr[i+1]<arr[i+2])
{
    int b=arr[i+1];
    arr[i+1]=arr[i+2];
    arr[i+2]=b;
}
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}