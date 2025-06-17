#include <bits/stdc++.h>
using namespace std;
void print(int arr[][7])
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr[i][j] < 0)
            {
                cout << "_"
                     << " ";
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}
bool check(int arr[][7])
{
    // Rows
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2])
            {
                return true;
            }
        }
    }
    // Column
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i + 2][j])
            {
                return true;
            }
        }
    }
    //Diagonal
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr[i][j] == arr[i + 1][j-1] && arr[i + 1][j- 1] == arr[i + 2][j -2])
            {
                return true;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr[i][j] == arr[i + 1][j+1] && arr[i + 1][j+1] == arr[i + 2][j +2])
            {
                return true;
            }
        }
    }

    return false;
}
int check_non_negative_row(int arr[][7], int a)
{
    for (int i = 6; i > -1; i--)
    {
        if (arr[i][a] < 0)
        {
            return i;
        }
    }
}
int main()
{
    int a = -49;
    int arr[7][7];
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            arr[i][j] = a;
            a++;
        }
    }
    print(arr);
    for (int i = 0; i < 49; i++)
    {
        if (i % 2 == 0)
        {
            cout << "player 1" << endl;
            cout << "enter the column " << endl;
            int a;
            cin >> a;
            int b = check_non_negative_row(arr, a);
            arr[b][a] = 1;
            print(arr);
            if (check(arr))
            {
                cout << "player 1 win" << endl
                     << "CONGRATULATION!!!!";
                return 0;
            }
        }
        else
        {
            cout << "player 2" << endl;
            int a;
            cin >> a;
            int b = check_non_negative_row(arr, a);
            arr[b][a] = 2;
            print(arr);
            if (check(arr))
            {
                cout << "player 2 win" << endl
                     << "CONGRATULATION!!!!";
                return 0;
            }
        }
    }
    return 0;
}