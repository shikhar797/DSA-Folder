// #include<stdio.h>
// int main(){
//     int a=15,b=5,c,d;
//     c=a<<b;//1111-111100-6
//     d=a>>b;//1111-0011-3a
//     printf("%d %d ",c,d);



// return 0;
// }
// #include<stdio.h>
// int main(){
//     int a=1034,b=3;
//     // printf("%d",a||b);
//     b=~a;
//     printf("%d",b);

// return 0;
// }
#include<stdio.h>
int main(){
int a=5,b;
b = ++a + ++a + a++;
printf("%d",b);
return 0;
}