#include <iostream>
using namespace std;
int main()
{
    int num, flag = 1;
    cout << "enter the number";
    cin >> num;
    for (int i = 2; i <= (num / 2); i++)
    {
        
        if (num % i == 0)
        {
            
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        
        cout << "it is not a prime number ";
    }
    else
    {
        cout << "it is a prime number";
    }

    return 0;
}