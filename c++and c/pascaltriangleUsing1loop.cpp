#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a=1;
    for (int i = 0; i < 7 && a< 7; i++)
    {
        if (i<a)
        {
            //cout<<"*";
            cout<<pow(11,i);
        }
        else if(i>a){
            i=-1;
            a++;
            cout<<"\n";
        }       
    }
    
return 0;
}