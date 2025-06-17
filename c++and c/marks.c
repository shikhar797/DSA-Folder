#include <stdio.h>
int main()
{
    int a, b, c, d, e, cp = 0;
    float avg;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if ((a,b,c,d,e)>100)
    {
        /* code */
        printf("invalid marks");
    }
    
    if (a < 30)
    {
        cp = cp = +1;
    }
    else if (b < 30)
    {
        /* code */
        cp = cp + 1;
    }
    else if (c < 30)
    {
        /* code */
        cp = cp + 1;
    }
    else if (d < 30)
    {
        /* code */
        cp = cp + 1;
    }
    else if (e < 30)
    {
        /* code */
        cp = cp + 1;
    }
    avg = (a + b + c + d + e);
    avg=avg/5;
    
    if (avg <= 100 && avg >= 75)
    {
        printf("Pass First Division %0.1f CP:%d", avg, cp);
    }
    else if (avg <75 && avg >= 60)
    {
        printf("Pass Second Division %0.1f CP:%d", avg, cp);
    }
    else if (avg <60 && avg >= 33)
    {
        printf("Pass Third Division %0.1f CP:%d", avg, cp);
    }
    else if (avg<33)
    {
        /* code */

        printf("Fail CP:%d",cp);
    }
    

    return 0;
}