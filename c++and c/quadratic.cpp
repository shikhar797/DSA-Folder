#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,delta;
    float root1,root2;
    
    cout<<"enter a \n";
    cin>>a;
    cout<<"enter b \n";
    cin>>b;
    cout<<"enter c \n";
    cin>>c;
    delta=(b*b)-(4*a*c);
    if (a==0)
    {
        /* code */
        cout<<"equation is not possible";
    }
    else
    {
        /* code */
        if (delta>0)
        {
            /* code */
            root1=(-b+sqrt(delta))/(2*a);
            root2=(-b-sqrt(delta))/(2*a);
            cout<<"roots are\n"<<root1<<endl<<root2;
            

        }
        else if (delta=0)
        {
            /* code */
            root1=-b/(2*a);
            
            cout<<"roots are same and equal\n"<<root1<<endl<<root2;
            

        }
        if (delta<0)
        {
            /* code */
            
            cout<<"roots are imaginary\n";
            

        }
        
    }
    
    
return 0;
}
