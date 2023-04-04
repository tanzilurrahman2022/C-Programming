#include<stdio.h>
int main()
{
 int tk;
 scanf("%d",&tk);
 if(tk>=10000)
  {
    printf("I will buy a smart phone.\n");
    if(tk>=20000)
    {
    printf("I will buy a laptop.");
    }
  }
  else if(tk>=5000)
  {
  printf("I will buy a smart watch");
  }
  else 
  {
  printf("I will buy some cloths.");
  }
  
 return 0;
}