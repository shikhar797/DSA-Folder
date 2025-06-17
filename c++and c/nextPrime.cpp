#include<iostream>
using namespace std;
int prime(int num){
    int f=1;
    
    for (int i = 0; i < num; i++)
    {
        /* code */
        if (num%i==0)
        {
            /* code */
            f=0;
            break;
        }
        cout<<f;
        return f;
        
    }


}    
int main(){
    int num;
    cin>>num;
    int flag;
    
    int i=num+1;
    for (i; i >num; i++)
    {
        /* code */
        flag=prime(i);
        if (flag==1)
        {
            /* code */
            break;
        }
        
    }
    cout<<i;
    

}