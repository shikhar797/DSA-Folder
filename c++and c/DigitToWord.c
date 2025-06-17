#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,a,rev=0,rem=0;
    scanf("%d",&n);
    while (n!=0)
    {
        /* code */
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    
    
    for(int i=0;i!=rev;i++){
        a=rev%10;
        rev=rev/10;
        
        if(a==1)
            printf("One ");
        if(a==2)
            printf("Two ");
        if(a==3)
            printf("Three ");
        if(a==4)
            printf("Four ");
        if(a==5)
            printf("Five ");
        if(a==6)
            printf("Six ");
        if(a==7)
            printf("Seven ");
        if(a==8)
            printf("Eight ");
        if(a==9)
            printf("Nine ");
        
    }
    
    
    return 0;
}