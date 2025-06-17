#include<iostream>
using namespace std;
int main(){
    int matrixA[3][3];
    int matrixB[3][3];
    int result[3][3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j<3; j++)
        {
            /* code */
            cout<<"enter the element of matrix A "<<i+1<<","<<j+1<<":";
            cin>>matrixA[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j<3; j++)
        {
            /* code */
            cout<<"enter the element of matrix B "<<i+1<<","<<j+1<<":";
            cin>>matrixB[i][j];
        }
        
    }
    cout<<"matrix A and B is \n";
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j<3; j++)
        {
            /* code */
            cout<<matrixA[i][j]<<" ";
            
        }
        cout<<"\t";
        for (int j = 0; j<3; j++)
        {
            /* code */
            cout<<matrixB[i][j]<<" ";
            
        }
        cout<<endl;
        
    }
    
    
    // by multiplying the row of first matrix to the column of second matrix we got matrix multiplication
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j<3; ++j)
        {
            /* code */
            int sum=0;
            for (int k = 0; k < 3; ++k)      //here we will use 3rd variable to multiply row to coulumn
            {
                /* code */
                sum=sum+matrixA[i][k]*matrixB[k][k];    

                result[i][j]=sum;
            }
            
        }
        
        
    }
    cout<<"multiplication of matrix A and matrix B is"<<"\n" ;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j<3; j++)
        {
            /* code */
            cout<<result[i][j]<<" ";
            
        }
        cout<<"\n";
        
    }
    

    


return 0;
}