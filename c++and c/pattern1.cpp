#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0, k = 0, l = 1; i < n; i++)
    {
        if (k < 3)
        {
            for (int j = 0; j < k; j++)
            {
                cout << " ";
            }
            cout << "*";
            k++;
            cout << endl;
        }
        else if (l >= 0)
        {
            for (int j = 0; j < l; j++)
            {
                cout << " ";
            }

            cout << "*";
            l--;
            cout << endl;
        }
        else
        {
            l = 1;
            k = 1;
        }
    }
    return 0;
}