#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int l,int m,int h){
    int n1=m-l+1,n2=h-m;
    int lf[n1],r[n2];
    for(int i=0;i<n1;i++) lf[i]=v[i];
    for(int j=0;j<n2;j++) r[j]=v[m+j+1];
    int i=0,j=0,k=l;
    while (i<n1&&j<n2)
    {
        if(lf[i]<r[j])  {
            v[k]=lf[i];
            i++;k++;
        }    

        else {
            
            v[k]=r[j];
            j++;k++;
        }  
    }
    while (i<n1)
    {
        v[k]=lf[i];
        i++;k++;
    }
    while (j<n2)
    {
        v[k]=r[j];
        j++;k++;
    }
}

int main(){
    vector<int>v={1,2,3,4,2,4,6,8};
    
    int l=0;
    int h=v.size();
    
    merge(v,l,3,h-1);
    for(auto x:v)
    cout<<x<<" ";  

    

return 0;
}
