#include <iostream>
using namespace std;
int main()
{
    int n = 8, s = 0, a = 0,b;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8};
    int m=arr[0];
    for (int i = n - 1; i > 0; i--)
    {
        if (a)
        {
            a = arr[i - 1];
            arr[i - 1] = b;
            
        }
        else
        {
            a = arr[i - 1];
            arr[i - 1] = arr[i];
        }
        b=a;  
    }
    arr[n-1]=m;
    for (int i = 0, j = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}