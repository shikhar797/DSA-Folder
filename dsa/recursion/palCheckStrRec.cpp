#include<iostream>
#include<string.h>
using namespace std;
bool pal(string a,int str,int end){
    if (str>=end)
    {
        return true;
    }
    return (a[str]==a[end])&&pal(a,str+1,end-1);


}
int main(){
    string a="heh";
    int end=a.length()-1;
    int str=0;
    
    if (pal(a,str,end))
    {
        cout<<"palandrome";
    }
    else 
    cout<<"not a palandrome";
    

return 0;
}