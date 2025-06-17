#include <stdio.h>
int main(){
    float y1,y2,x1,x2,m,c;
    printf("enter cordinate x1=");
    scanf("%f",&x1);
    printf("enter cordinate x2=");
    scanf("%f",&x2);
    printf("enter cordinate y1=");
    scanf("%f",&y1);
    printf("enter cordinate y2=");
    scanf("%f",&y2);
    
    m=((y2-y1)/(x2-x1));
    c=(y1-(m*x1));
    printf("y=%.1fx+%.1f",m,c);

    return 0;
}