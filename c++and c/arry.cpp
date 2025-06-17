#include<iostream>
using namespace std;

# include<vector>
int main(){
    vector <string> fuck={"shikhar","gupta"};
    fuck.push_back("yug");
    cout<<fuck[2];
    string Names[2]={"shikhar","gupta"};
    for (int i = 0; i <fuck.size(); i++)
    {
        cout<<fuck[i]<<"\n";
    }
    
return 0;
}