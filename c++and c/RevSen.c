#include<stdio.h>
#include<string.h>
int main(){
    char str1[1000];
    fgets(str1,sizeof(str1),stdin);
    puts(str1);


return 0;
}