#include<stdio.h>
int fibonnaci(int n){
    if (n<2){
        return 1;

    }
    else
    {
        return (fibonnaci(n-1) + fibonnaci(n-2)); 
    }


}
int main(){
    int a;
    printf("enter a number \n");
    scanf("%d",&a);
    int fib = fibonnaci(a);
    printf("fibonnaci series %d term is %d  ",a,fib);


return 0;
}