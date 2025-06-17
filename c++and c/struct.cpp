// #include <bits/stdc++.h>
// using namespace std;
// struct point{
//     int x;
//     int y;
// };
// int main(){
//     point p={10,20};
//     point *ptr=&p;
//     cout<<p.x<<" ";
//    cout<<ptr->y;


// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// struct point{
//     int x;
//     int y;
// };
// int main(){
//     point arr[5];
//     for(int i=0;i<5;i++){
//         arr[i].x=i;
//         arr[i].y=i*10;
//     }
//     for(int i=0;i<5;i++){
//         cout<< arr[i].x<<" ";
//         cout<<arr[i].y<<endl;
//     }
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// struct point {
//     string s;
//     int x;
//     float y;
//     void print(point *p){
//         cout<<p->x<<" ";
//         cout<<p->s<<" ";
//         cout<<p->y<<" "<<endl;

//     }
// };
// int main(){
//     point p[10];
//     for(int i=0;i<10;i++){
//         p[i].x=3;
//         p[i].s="das";
//         p[i].y=21.214;
//         p[i].print(&p[i]);
    
//     }
    
   
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
struct point {
    int x;
    int y;
    float z;
    string s;
    void print( point &p){
        for(int i=0;i<5;i++){
        cout<<p.x<<" ";
        cout<<p.y<<" ";
        cout<<p.z<<" ";
        cout<<p.s<<endl;
        }


    }
};
int main(){
    point p[5];
    for(int i=0;i<5;i++){
        p[i].x=423;
        p[i].y=34;
        p[i].z=43.32;
        p[i].s="dsf";
        p[i].print(p[i]);
    }

return 0;
}