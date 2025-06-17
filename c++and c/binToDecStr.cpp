#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int sum=0;
    string bnum="110";
    int len=bnum.length()-1;
    for (int i = 0,j=len; i < len,j>=0; i++,j--)
    {
        if (bnum[j]=='1')
        {
            /* code */
            sum=sum+pow(2,i);
        }      
    }
    cout<<sum;
    
    
return 0;
}