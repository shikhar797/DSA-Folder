#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int c, sum = 0,  i = 0;
    int  B;
    cin>>B;
    while (B > 0)
    {
        c = B % 10;
        if (c != 0 && c != 1)
        {
            /* code */
            cout << "invalid number";
            return 0;
        }
        else
        {
            sum = sum + (pow(2, i) * c);
            B = B / 10;
            i = i + 1;
        }
    }
    cout << "\n"
         << "the number in decimal is" << sum;

    return 0;
}
