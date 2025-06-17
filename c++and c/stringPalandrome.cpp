#include<iostream>
#include <string>
using namespace std;
int main(){
    char str[10];
    cout<<"enter a word";
    cin.getline(str,10);
    int len,flag=0;
    
    for ( len=0;str[len]!='\0' ; len++) ;
    
    for (int i = 0,j=len; i < len; i++,j--)
    {
        /* code */
        if (str[i]!=str[j-1])
        {
            /* code */
            flag=1;
            break;
        }
        
    }
    if (flag==1)
    {
        /* code */
        cout<<"its not a palandrome";

    }
    else{
        cout<<("its a palandrome");
    }
    
    


    
    
    
    
    
    
    
    

return 0;
}
