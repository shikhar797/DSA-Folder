#include<stdio.h>
int main(){
    int a=0,b=1,n,sum=0;
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        /* code */
        sum=a+b;
        a=b;
        b=sum;
    }
    char a;
    
    printf("%d",a);

return 0;
}