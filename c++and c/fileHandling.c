#include<stdio.h>
int main(){
    FILE* fptr;
    fptr=fopen("a.txt","r");
    char f[1000];
    if (fptr!=NULL)
    {
        fgets(f,1000,fptr);
        printf("%s",f);
        // printf("Oened Sussessfully");
    }
    else{
        printf("Not opened succesfully");
    }
    
    return 0;
}
