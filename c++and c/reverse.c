#include <stdio.h>
int main(){
    int a,b,c,num,x,y,z,reverse;
    printf("enter a number ");
    scanf("%d",&num);
    a=num%10;
    x=num/10;
    b=x%10;
    y=x/10;
    c=y%10;
    reverse=a*100+b*10+c;
    // printf("reverse = %d",reverse);
    // printf("%d",num);
    if(reverse==num){
        printf("yes");
    }
    else{
        printf("NO");
    }

    
    


    return 0;
}