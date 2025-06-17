#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string str = "UDDUUDDDUU";
    //int f = 0;
    int c = 0, h = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'U' && s.empty())
        {
            h++;
        }
        else if (str[i] == 'D' && s.empty())
        {
        
            s.push(str[i]);
            //cout << str[i] << " ";
        }
        else if (str[i] == 'D' && !s.empty())
        {
            s.push(str[i]);
            //cout << str[i] << " ";
        }
        else if (str[i] == 'U' && !s.empty())
        {
            s.pop();
            //cout << str[i] << "";
            if (s.size() == h)
            {
                c++;
                h=0;
                while(!s.empty()) s.pop();
            }
        }
    }
    cout << c;
    return 0;
}
// calulate the number of valley biker pass through
// a valley is a sequence of step below sea level starting with a step down and ending with a step up

//this is not a efficient solution because this is taking space complexcity O(n)

//there is a more efficiwnt solution which take O(1) space complexcity