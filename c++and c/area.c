#include<stdio.h>
#include<math.h>
int main(){
    const float PI=3.14;
    float radius,area ;
    printf("\nenter the radius \n" );
    scanf("%f",&radius);
    area=PI*pow(radius,2);
    printf("area of circle is %f \n",area);

    return 0;
}