#include<stdio.h>
int main(){
    int num,t=0,a;
    scanf("%d",&num);
    int n1=num;

    while (n1!=0)
    {
        a=num%10;
        n1=n1/10;
        if (a!=0&&num%a==0)
        {
            t++;
        }
        
    }
    if (t>=2)
    {
        printf("YES");
    }
    else
    printf("NO");
    
    

return 0;
}