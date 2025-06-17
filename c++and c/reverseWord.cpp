// #include <iostream>
// using namespace std;
// #include<string.h>
// int main()
// {
//     char str[100],word[100];
//     cin.getline(str,100);
//     int k=0;
//     strcat(str," ");

//     for (int i = 0; str[i]!='\0'; i++)
//     {
//         /* code */
//         if (str[i]!=' ')
//         {
//             /* code */
//             word[k]=str[i];
//             k=k+1;
//         }
//         else{
//             while (k>=0)
//             {
//                 /* code */
//                 cout<<word[--k];

//             }
//             cout<<" ";

//         }

//     }

//     return 0;
// }
// WAP TO REVERSE WORD IN THE LINE

// #include<iostream>
// using namespace std;
// #include<string.h>
// int main(){
//     char line[100],word[100];
//     cin.getline(line,100);
//     strcat(line," ");
//     int k=0;
//     for (int i = 0; line[i]!='\0'; i++)
//     {
//         /* code */
//         if (line[i]!=' ')
//         {
//             /* code */
//             word[k]=line[i];
//             k=k+1;
//         }
//         else{
//             while (k>0)
//             {
//                 /* code */
//                 cout<<word[--k];

//             }
//             cout<<" ";

//         }

//     }

// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "   hello this is shikhar         gupta";
    int a = 0, c = 0;
    int l = s.size();
    for (int j = 0; j < l; j++)
    {

        for (int i = 0; i < l - (c+1); i++)
        {
            if (s[i] == ' ')
                a = i ;
        }
        for(int i=a+1;i<l;i++){
            cout<<s[i];
            c++;
        }
        l=l-c;
        c=0;
    }

    cout << s[a];

    return 0;
}


