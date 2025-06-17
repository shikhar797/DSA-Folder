// #include <bits/stdc++.h>
// using namespace std;
// void print(vector<pair<int,char>>v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
// }
// int main(){
    //pair<int,string>p;
    // cin>>p.first;
    // cin>>p.second;
    //p={1,"shikhar"};
    //p=make_pair(1,"shikhar");
    // pair<int,char>p_arr[4];
    // int a[]={1,2,3,4};
    // char b[]={'a','b','c','d'};
    // for(int i=0;i<4;i++){
    //     p_arr[i]={a[i],b[i]};
    // }
    // swap(p_arr[0],p_arr[2]);                       this will swap the whole pair
    // for(int i=0;i<4;i++){
    //     cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    // }
    //vector<pair<int,char>>v={{1,'a'},{2,'b'},{3,'c'},{4,'d'}};
//     vector<pair<int,char>>v;
//     int a;
//     char b;
//     for(int i=0;i<4;i++){
//         cin>>a;
//         cin>>b;
//         v.push_back({a,b});
//     }
//     print(v);
// return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    pair<int ,char>parr[n];
    int arr[n]={5,4,3,2,1};
    char ch[n]={'a','b','c','d','e'};
    for(int i=0;i<n;i++){
        parr[i]={arr[i],ch[i]};
    }
    sort(parr,parr+n);
    for(int i=0;i<n;i++){
        cout<<parr[i].second<<" ";
    }
return 0;
}