#include<stdio.h>
// int main(){
//     int n=1;
//     scanf("%d",&n);
//     for (int i=1;i<=10;)
//     {
//         printf("%d \n",n*i);
//         i++;
//     }
// return 0;
// }
int main(){
    
    int n,sum=0;
    printf("enter:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+(1.0/i);
    }
    printf("%d",sum);
    return 0;

}