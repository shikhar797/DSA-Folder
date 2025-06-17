#include<stdio.h>
int fact(int);
int main(){
    int n,a;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        a=fact(i);
        if (a==i)
        {
            /* code */
            printf("yes");
        }
        
    }
    

return 0;
}
int fact(int n){
    int a,f=1,sum=0;
    int n1=n;
    while (n1!=0)
    {
        /* code */
        a=n1%10;
        n1=n1/10;
        while (a>0)
        {
            /* code */
            f=f*a;
            a--;
        }
        sum=sum+f;
        f=1;
        
        
    }
    return sum;
    
    
}