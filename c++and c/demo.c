
#include<stdio.h>
int main(){
    // int x,y;
    // scanf("%d %d",&x,&y);
//     if(x==y)
//     {
//         printf("num are eq");

//     }
//     else if(x>y){
//         printf("x is greater");
//     }
// else if(y>x){
//     printf("y is greater");

// }
//     else{
//         printf("nos are not eq");
//     }
// for(int i=0;i<=10;i++){
//     if(i%2!=0){
//         printf("%d \n",i);
//     }
// }
int n,m;
scanf("%d %d",&n,&m);
if(n==0){
    for (int i = 0; i < m; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);

        }
    }
    
}
else if(n==1){
    for (int i = 0; i < m; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            
        }
    }
    
}
}