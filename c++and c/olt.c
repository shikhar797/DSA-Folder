// #include<stdio.h>
// int main(){
    
    
//    int a1 = 51; 
//    int b1 = 0; 
//    int c2 = a1 || --b1; //here it  will not go to --b because or oerator will not check second value if first is true
   
//    int d3 = a1-- && --b1; 
//    printf("a1 = %d, b1 = %d, c2 = %d, d3 = %d", a1, b1, c2, d3); 
//    return 0;
// }   
#include <stdio.h>
// int main(){
//     int x = 97;
//     int y = sizeof(++x);
//     printf("x =%d and y=%d", x,y);
//     return 0;
// }
int main(){
    int a = 5;
    int b = ++a + a++ + --a;
    printf("Value of b is %d", b);
    return 0;
}
