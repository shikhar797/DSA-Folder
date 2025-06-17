#include <iostream>
using namespace std;
int main()
{

    int n = 10, c1 = 0, c2 = 0;

    int arr[n] = {0,0,3,3,4,4,0,6,2,0};
    int a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[a] == arr[i])
            c1++;
        if (arr[b] == arr[i]) //&& a != b
            c2++;
        if (i == n - 1 && a < n && b < n)
        {
            if (c1 > c2)
            {
                c2 = 0;
                c1 = 0;
                b++;
            }
            else 
            {
                c1 = 0;
                c2 = 0;
                a++;
            }
            i = -1;
        }
    }
    if (c1 > c2)
    {
        cout << arr[a] << " " << c1;
    }

    else
        cout << arr[b] << " " << c2;

    return 0;
}

//