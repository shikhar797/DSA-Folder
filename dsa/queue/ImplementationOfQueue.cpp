#include <bits/stdc++.h>
using namespace std;
bool isEmpty(int &n)
{
    if (n == 0)
        return true;
    return false;
}
bool isFull(int &n, int cap)
{
    if (n == cap)
        return true;
    return false;
}
void que(int arr[], int &n, int key, int cap)
{
    n++;
    cout << n << " ";
    if (isFull(n, cap))
    {
        cout << " \nover flow" << endl;
        return;
    }
    arr[n] = key;
}
void dque(int arr[], int &n)
{
    if (isEmpty(n))
    {
        cout << "\nunder flow";
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}
void getFront(int arr[],int n)
{
    if (isEmpty(n))
    {
        cout << "\nunder flow"<<endl;
        return;
    }
    cout << arr[0]<<endl;
}
void getRear(int arr[],int n, int cap)
{
    if (isFull(n, cap))
    {
        cout << " \nover flow" << endl;
        return;
    }
    cout << arr[n]<<endl;
}

int main()
{
    int const cap = 5;
    int n = -1;
    int arr[cap];
    que(arr, n, 10, cap);
    que(arr, n, 20, cap);
    que(arr, n, 30, cap);
    que(arr, n, 40, cap);
    que(arr, n, 50, cap);
    que(arr, n, 60, cap);
    dque(arr, n);
    dque(arr, n);
    dque(arr, n);
    getFront(arr,n);
    getRear(arr,n,cap);
    cout << "\nsize of queue is " << n;

    return 0;
}  //naive approach --> here the implementation of dequeue is O(n)
   // by using circular array we can reduce the time complexcity of dequeue by O(1)