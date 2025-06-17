#include <bits/stdc++.h>
using namespace std;
int main(){
    forward_list<int>l1;
    l1.push_front(10);
    l1.push_front(20);
    l1.push_front(30);
    l1.push_front(40);
    // for(auto it=l1.begin();it!=l1.end();it++){
    //     cout<<*it<<" ";
    // }
    forward_list<int>l2;
    l2.assign(l1.begin(),l1.end());
    l2.assign({2,3,4}); //assign function replaces the old value and insert new one 
    
    auto it=l2.begin();
    it=l2.insert_after(it,{5,6});
    it=l2.erase_after(l2.begin());
    // for(auto it=l2.begin();it!=l2.end();it++){
    //     cout<<*it<<" ";
    // }
    l1.merge(l2);
    l1.reverse();
    l1.sort();
    for(auto it=l1.begin();it!=l1.end();it++){
        cout<<*it<<" ";
    }
    
return 0;
}