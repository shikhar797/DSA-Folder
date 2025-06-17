#include<iostream>
using namespace std;
struct Area
{
    int side;
    int len;
    int wd;

};

int main(){
    Area a;
    cin>>a.side;
    cin>>a.len;
    cin>>a.wd;

    cout<<"area of square is :"<<a.side*a.side<<endl;
    cout<<"area of rectangle is :"<<a.len*a.wd;

return 0;
}