#include<stdio.h>
int main()
{
   int i,n;
   for(i=1;i<=10;i=i+1)
   {
      if(i==6)
      {
      continue;
      }
      printf("%d\n",i);
   }
   return 0;
}