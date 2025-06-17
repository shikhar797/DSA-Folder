// #include<iostream>
// using namespace std;
// void fun(int *p){
//     *p=*p+5;
// }                                        //Advantage of pointers are                                            
// int main(){                              //1.To change value 
//     int x=10;
//     fun(&x);
//     cout<<x;
// return 0;
// }

#include<iostream>
using namespace std;
void fun(string *s){
    cout<<*s;
}
int main(){
    string s="Shikhar Gupta";
    fun(&s);                                  //2.To avoid copying large ojbects

return 0;
}
