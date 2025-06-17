#include <bits/stdc++.h>
using namespace std;
struct Person{
    string name;
    int age;
    float height;
    Person(string nm,int a,float h){
        name=nm;
        age=a;
        height=h;
    }
};
struct myCmp{
    bool operator()(Person const &p1,Person const &p2){
        return p1.height<p2.height;
    }
};
int main(){
    priority_queue<Person,vector<Person>,myCmp>pq;
    pq.push(Person("Shikhar",19,5.10));
    pq.push(Person("Nirmit",20,6.0));
    pq.push(Person("Yug",20,5.10));
    while (!pq.empty())
    {
        cout<<pq.top().name<<endl;
        pq.pop();

    }
    
return 0;
}