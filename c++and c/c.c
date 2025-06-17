#include<stdio.h>
void birthday(char[],int);
int main(){
    char name[]="shikhar";
    int age=18;
    birthday(name,age);

    return 0;

}
void birthday(char name[], int age){
    printf("hello %s today is your birthday \n",name);
    printf("you turned %d this year \n",age);
        
    
}