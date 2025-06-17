#include<iostream>
using namespace std;
int main(){
    int rev=0,rem=0,num,a;
    cout<<"enter the number";
    cin>>num;
    a=num;
    while (a!=0)
    {
        /* code */
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if (num==rev)
    {
        /* code */
        cout<<"the number is panadrome";
    }
    else{
        cout<<"the number is  not panadrome";
    }
    
return 0;
}