#include<stdio.h>
int main(){
    int a,b,c,rev,num,num1;
        scanf("%d",&num);
        num1=num;
        a=num1%10;
        num1=num1/10;
        b=num1%10;
        num1=num1/10;
        c=num1%10;
        rev=a*100+b*10+c;
        if (num==rev)
            printf("YES");
        else
            printf("NO");

return 0;
}