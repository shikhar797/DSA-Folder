#include<iostream>
using namespace std;
int main(){
    
    char str[100];
    cout<<"enter any sentence ";
    cin.getline(str,100);
    int len;
    for (len = 0;str[len]!='\0' ; len++) ;//here point to be noted that you have you have to give space after for loop  
    
    for (int i = 0; i < len; i++)
    {
        /* code */
        if (str[i]==' ')
        {
            /* code */
            str[i]='-';
        }
        
    }
    for (int i = 0; i < len; i++)
    {
        /* code */
        cout<<str[i];
        
    }

    
return 0;
}
