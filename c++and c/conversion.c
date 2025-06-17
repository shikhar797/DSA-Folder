#include<stdio.h>
int main(){
    char unit;
    float temp;
    printf("enter the unit C and F \n");
    scanf("%c",&unit);
    
    unit=toupper(unit);
    if (unit=='C')
    {
        /* code */
        printf("temperature was currently in celsius\n");
        printf("enter the temperature\n ");
        scanf("%f",&temp);
        temp=(temp * 9 / 5) + 32;
        printf("temperature in farenite is %.1f \n",temp);

    }
    else if (unit=='F')
    {
        /* code */
        printf("temperature was currently in feranite\n");
        printf("enter the temperature \n ");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5) / 9;
        printf("temperature in celsius is %.1f \n",temp);

    }
    
    

return 0;
}