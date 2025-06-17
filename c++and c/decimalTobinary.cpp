#include<iostream>
using namespace std;
#include<math.h>
//this program is vs code error ,
//by using online compiler we are getting correct answer
int main(){
    int i,sum=0;
    cout<<"enter the number:";
    cin>>i;
    for (int b=0; i >0; b++)
    {
        /* code */
        int a=i%2;
        sum=sum+(pow(10,b)*a);
        i=i/2;


    }
    cout<<sum;

    
    
    
    
return 0;
}