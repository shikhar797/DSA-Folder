#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,n,sum=0;
    int c=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        
        for(int j=1;j<n/2;j++){
            sum=sum+j;
            c++;
            if(n==sum){
                printf("%d \n",c);
            }
            else if(sum>n)
                printf("%d \n",c-1);
        }
    }


 
    
    
    return 0;
}
