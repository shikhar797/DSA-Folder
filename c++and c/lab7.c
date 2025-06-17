#include<stdio.h>
int main(){
    int a,a1=0,i1=0,c=0;
    scanf("%d",&a);
     i1=a;
    
    if (a>10)
    {
        /* code */
        while (i1!=0)
        {
            /* code */
            a1=i1%10;
            i1=i1/10; 
            if (a%a1==0)
            {
                /* code */
                c++;
                continue;

                
            }
            
            
            
            

        }
        if (i1==0 && c>=2)
        {
            /* code */
            printf("YES");
        }
        else {
            printf("NO");
        }
        
        
        
        
        
    }
    

return 0;
}