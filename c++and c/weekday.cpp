#include <iostream>
using namespace std;
int main()
{
    int valid = 1;
    int dd, mm, yyyy;
    cin>>dd>>mm>>yyyy;
    if (dd > 31 && mm > 12 && dd < 0){
        valid = 0;
        
    }
        
    else if (dd > 30 && (mm == 4 || mm == 6 || mm == 9 || mm == 11)){
        valid = 0;
    }
        
    else if(dd>31&&(mm ==1  || mm ==3  || mm == 5 || mm == 7||mm==8||mm==10||mm==12)){
        valid=0;
    }  
    else if(mm==2 &&(yyyy%400==0||yyyy%4==0 && yyyy%100!=0) ){
        if(dd>30){
            valid=0;
        }

    }
    else if(dd>29 && mm==2){
        valid=0;
    }
    else {
        valid=1;
    } 
    if (valid==0){
        cout<<"INVALID DATE";
    }

    return 0;
}   