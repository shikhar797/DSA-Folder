#include<iostream>
using namespace std;
int main(){
    int a=1,p=1;
    for (int i = 0; i < 20 && a< 20; i++)
    {
        if (i<a)
        {
            cout<<p;
        }
        else if(i>a){
            i=-1;
            a++;
            cout<<"\n";
        }       

    }
    
return 0;
}

