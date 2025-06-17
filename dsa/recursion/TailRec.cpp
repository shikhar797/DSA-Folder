//convert non tail recursion function into tail recursion

// #include<iostream>
// using namespace std;
// void print(int n){
//     if (n==0)
//         return;
//     cout<<n<<endl;
//     print(n-1);

    
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// return 0;
// }

//now making it tail recursion;
#include<iostream>
using namespace std;
void print(int n,int k){    //this conceppt is of dsa 
    if (n==0)               //tail recursion use less time then any another recursion
        return;
    cout<<k<<endl;
    print(n-1,k+1);

    
}
int main(){
    int n,k=1;
    cin>>n;
    print(n,k);
return 0;
}