#include<iostream>
using namespace std;
void prnt(int arr[],int n){
    
    for (int  i = 0; i <n ; i++)
    {
        cout<<arr[i]<<" ";
    }     
}
void del(int arr[],int n,int p){
       arr[p-1]=0;
       
       for (int i = p; i < n; i++)
       {
        arr[i-1]=arr[i];
       }
       arr[n-1]=0;

       prnt(arr,n);

}
int main(){
    int n,p;
    cin>>n;
    int arr[n];
    for (int &x:arr)
    {
        cin>>x;
    }

    cout<<"enter the position";
    cin>>p;
    del(arr,n,p);



return 0;
}