#include <stdio.h>
int main()

{

int i = 0, j = 0;

while (i++<4,j++<5){

i++;
printf("%d \n",i);
}

j++;
printf("%d \n",j);

printf("%d, %d ", i, j);

return 0;

}
