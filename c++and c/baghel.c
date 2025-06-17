#include <stdio.h>

int main()
{
  int i,Bi[100],b=0,e=0,c=0,n=0;
  
  for(i=0;;i++)
  {
    scanf("%d",&Bi[i]);
    if(Bi[i]==-1)
      break;
    b++;
    if(Bi[i]==1)
      e++;
  }
  for(i=0;i<=b;i++)
  {
    if(n==e)
      break;
    if(Bi[i]==1)
      n++;
    else if(Bi[i]==0 && n>=1)
      c++;
  }
  printf("%d",c);
  return 0;
}