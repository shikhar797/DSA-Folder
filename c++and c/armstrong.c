#include <stdio.h>
#include <string.h>
#include <math.h>                     //             WARNING
#include <stdlib.h>                  //in this program output is coming wrong but using online compiler answer is correct
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n1,n2,c=0,a=0,p=0;
    scanf("%d %d",&n1,&n2);
    // printf("%d %d ",n1,n2);
    for(int i=n1;i>=n1 && i<n2;i++){
        int i1=i;
        while(i1!=0){
            i1=i1/10;
            c=c+1;
        }
        
        int i2=i;
        while (i2!=0)
        {
            /* code */
            a=i2%10;
            i2=i2/10;
            p=p+pow(a,c);
            

        }
        c=0;
        if (p==i)
        {
            /* code */
            printf("%d \n",p);
            
        }
        p=0;
        
        
        
        
     }
    
    return 0;
}
