#include <stdio.h>
int main(){
    float Gs , DA,HRA,Bsalary;
    printf("enter the basic salary \n");
    scanf("%f",&Bsalary);
    DA=(Bsalary*0.2);
    HRA=(Bsalary*0.25);
    Gs=Bsalary+HRA+DA;
    printf("Gross saalary of the employee is %f",Gs);

    return 0;


}