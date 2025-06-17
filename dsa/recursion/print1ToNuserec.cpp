#include<iostream>
using namespace std;
void print(int n){
if (n==0)
{
    /* code */
    return;
}
print(n-1);
cout<<n<<endl;
   
}
int main(){
    int n;
    cin>>n;
    print(n);
return 0;
}4