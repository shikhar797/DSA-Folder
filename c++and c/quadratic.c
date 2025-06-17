#include <stdio.h>
int main()
{
    float a, b, c, d, x;
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (d == 0)
    {
        printf("REAL AND EQUAL \n");
        printf("%0.2f %0.2f",(-b/2*a),(-b/2*a));
    }
    else if (d > 0)
    {
        printf("REAL AND EQUAL \n");
        printf("%0.2f %0.2f ", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    }
    else
    {
        x = sqrt(-d);
        printf("IMIGINARY ROOTS\n");
        printf("%0.2f+%0.2fi %0.2f-%0.2fi", -b / (2 * a), x / (2 * a), -b / (2 * a), x / (2 * a));
    }
    return 0;

    return 0;
}