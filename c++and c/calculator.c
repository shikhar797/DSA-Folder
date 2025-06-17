#include<stdio.h>
int main(){
    char operator;
    float num1,num2;
    printf("\nchose the operator (+ - * /) \n");
    scanf("%c",&operator);
    switch (operator)
    {
    case '+':
        /* code */
        printf("enter the two numbers \n");
        scanf("%f,%f",&num1,&num2);
        printf("adition of two number is  %.2f \n",num1+num2);

        break;
    case '-':
        /* code */
         printf("enter the twob numbers \n");
        scanf("%f,%f",&num1,&num2);
        printf("subtraction of two number is  %.2f \n",num1-num2);

        break;    
    case '*':
        /* code */
         printf("enter the twob numbers \n");
        scanf("%f,%f",&num1,&num2);
        printf("multiplication of two number is  %.2f \n",num1*num2);

        break;
    case '/':
        /* code */
         printf("enter the twob numbers \n");
        scanf("%f,%f",&num1,&num2);
        printf("division of two number is  %.2f \n",num1/num2);

        break;    
    default:
    printf("%c is not a correct operator\n");
        break;
    }


return 0;
}