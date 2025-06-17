#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int hcf=1;
    for (int i = 1; i <= a && i<=b; i++)
    {       
        if (a%i==0 && b%i==0)
        {
            
            hcf=i;
        }   
    }
    printf("%d",hcf);
    

return 0;
}