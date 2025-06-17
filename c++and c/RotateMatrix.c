#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int a=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=a;
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++)
            printf("%d ",arr[i][n-j]);
        printf("\n");    
    }
    
    return 0;
}
