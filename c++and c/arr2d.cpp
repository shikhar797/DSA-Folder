#include<iostream>
using namespace std;
void print(int arr[3][2]){
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            /* code */
            cout<<arr[i][j]<<"\n";
        }
        
    }
    

}
int main(){
    int arr[3][2]={{10,20},{30,40},{50,60}};
    print(arr);

return 0;
}