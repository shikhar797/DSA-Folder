#include <bits/stdc++.h>
using namespace std;
struct Hospital{
    string name;               //vs code error in this program
    int age;
    string type;
    Hospital(string nm,int ag,string typ){
    name=nm;
    age=ag;
    type=typ;
    }
};
struct myCmp{
    bool operator()(Hospital const &p1, Hospital const &p2) {
        if (p1.type == "Emergency" && p2.type != "Emergency") {
            return false;
        }
        if (p2.type == "Emergency" && p1.type != "Emergency") {
            return true;
        }
        // If both are "Emergency" or both are not, compare based on age
        return p1.age < p2.age;  //higher age will get priority
    }
};
int main(){
    priority_queue<Hospital,vector<Hospital>,myCmp>pq;
    pq.push(Hospital("name1",10,"Emergency"));
    pq.push(Hospital("name2",20,"Casual"));
    pq.push(Hospital("name3",50,"Emergency"));
    pq.push(Hospital("name4",40,"Casual"));
    while (!pq.empty())
    {
        cout<<pq.top().name<<endl;
        pq.pop();

    }
return 0;
}