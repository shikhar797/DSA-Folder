#include<iostream>
using namespace std;
int main(){
    int flag=0;
    string num="1231";
    int len=num.length()-1;
    for (int i = 0,j=len; i < len,j>=0; i++,j--)
    {
        if (num[i]!=num[j])
        {
            flag=1;

        }
        
        
    }
    if (flag==1)
    {
        /* code */
        cout<<"it is not palandrome";
    }
    else{
        cout<<"palandrome";
    }
    
    
return 0;
}