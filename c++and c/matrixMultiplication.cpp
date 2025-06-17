#include<iostream>
using namespace std;
int main(){
    int row,col,sum=0;
    cout<<"enter number of rows of matrix A\n";
    cin>>row;
    cout<<"enter number of column of matrix A\n";
    cin>>col;
    float arr1[row][col];
    
    
    cout<<"enter the matrix A"<<"\n";
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j<col; j++)
        {
            /* code */
            cout<<"enter the element at position "<<i+1<<","<<j+1<<"\n";

            cin>>arr1[i][j];
        }
        
    }
    int row1,col1;
    cout<<"enter number of rows of matrix B\n";
    cin>>row1;
    cout<<"enter number of column of matrix B\n";
    cin>>col1;
    float arr2[row1][col1];
    //float result[row][col1];
    
    cout<<"enter the matrix B \n";
    for (int i = 0; i < row1; i++)
    {
        /* code */
        for (int j = 0; j<col1; j++)
        {
            /* code */
            cout<<"enter the elementat position "<<i+1<<","<<j+1<<"\n";

            cin>>arr2[i][j];
        }
        
    }
    cout<<"Matrix A \n";
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Matrix B \n";
    for (int i = 0; i < row1; i++)
    {
        /* code */
        for (int j = 0; j < col1; j++)
        {
            /* code */
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Resultant Matrix \n";
    if (col==row1)
    {
        
        for (int i = 0; i < row&& i<col; i++)
    {
        
        for (int j = 0; j<col1; j++)
        {
            /* code */
            sum=sum+arr1[i][j]*arr2[j][i];
            cout<<sum<<" ";
                
        }
        cout<<"\n";
        
        
    }
    }
    else{
        cout<<"matrix multiplication not possible";
    }

    
    

    
    
    
    
    
    
return 0;
}