#include <bits/stdc++.h>
using namespace std;
void print(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j]<0){
                cout<<"_"<<" ";
            }
            else if(arr[i][j]==1){
                cout<<"X"<<" ";
            }
            else {
                cout << "O" << " ";
            }
            
        }
        cout << endl;
    }
}
bool check(int arr[][3])
{
    // Rows
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
        {
            return true;
        }
    }
    // Columns
    for (int j = 0; j < 3; j++)
    {
        if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j])
        {
            return true;
        }
    }
    // Diagonals
    if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) || (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]))
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[3][3]={{-1,-2,-3},{-4,-5,-6},{-7,-8,-9}};
    // print(arr);
    // check(arr);
    for (int i = 0; i < 9; i++)
    {
        int a;
        int b;
        if (i % 2 == 0)
        {
            cout << "player 1" << endl;
            cout << "enter the row " << endl;
            cin >> a;
            cout << "enter the column " << endl;
            cin >> b;
            arr[a][b] = 1;
            print(arr);
            if(check(arr)){
                cout<<"player 1 win"<<endl<<"CONGRATULATION!!!!";
                return 0;
            }
        }

        else
        {
            cout << "player 2" << endl;
            cout << "enter the row " << endl;
            cin >> a;
            cout << "enter the column " << endl;
            cin >> b;
            arr[a][b] = 2;
            print(arr);
            if(check(arr)){
                cout<<"player 2 win"<<endl<<"CONGRATULATION!!!!";
                return 0;
            }
        }
    }
    return 0;
}