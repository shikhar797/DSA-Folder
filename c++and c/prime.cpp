#include<iostream>

using namespace std;


int main(){
    int n=100,i=2;
     while (n>0)
     {
        /* code */
        
        if(n%i==0)
        {
            /* code */
            cout<<i<<"\n";
            n=n/i;
            
        }
        else
        {
            
            i++;
        }
     }
     
    
return 0;
}