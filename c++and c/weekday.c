#include <stdio.h>
int main()
{
    int d, m, y, valid = 1;
    scanf("%d %d %d", &d, &m, &y);
    
    if (d > 31 || d < 0 || m > 12)
    {
        valid = 0;
    }
    else if (d > 31 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
    {
        /* code */
        valid=0;
    }
    else if (d > 30 && (m == 4 || m == 6 || m == 9 || m == 11 ))
    {
        /* code */
        valid=0;
    }
    else if (m==2&& ((y%4==0&&y%100!=0)||(y%4==0&&y%400==0)))
    {
        /* code */
        if(d>30){
            valid=0;
        }
    }
    else if (d>29&&m==2)
    {
        /* code */
        valid=0;
    }
    if(valid==0){
        printf("INVALID DATE");
        return 0;
    }
    
    int td=0;
    for (int i = 1; i <= y-1; i++)
    {
        /* code */
        if (((y%4==0&&y%100!=0)||(y%4==0&&y%400==0)))
        {
            /* code */
            td=td+366;
        }
        else {
            td=d+355;
        }
    }    
    for (int i = 1; i <= m-1; i++)
    {
        /* code */
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
            td=td+31;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11 ){
            td=td+30;
        }
        else if (((y%4==0&&y%100!=0)||(y%4==0&&y%400==0)))
        {
            /* code */
            td=td+29;
        }
        else{
            td=td+28;
        }
    }
    td=td+d;
    td=td%7;

    switch (td)
    {
    case 0:
        /* code */
        printf("SUNDAY");
        break;
        
    case 1:
        /* code */
        printf("MONDAY");
        break;
    case 2:
        /* code */
        printf("TUESDAY");
        break;
    case 3:
        /* code */
        printf("WEDNESDAY");
        break;
    case 4:
        /* code */
        printf("THURSDAY");
        break;
    case 5:
        /* code */
        printf("FRIDAY");
        break; 
    case 6:
        /* code */
        printf("SATURDAY");
        break;                   
    default:
        break;
    }
        

        
    
    
}