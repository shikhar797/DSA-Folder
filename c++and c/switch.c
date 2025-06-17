#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("enter the two number \n ");
    scanf("%d %d \n", &a, &b);
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    }
    return 0;
}