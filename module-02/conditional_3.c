#include<stdio.h>
int main()
{
 int tk;
 scanf("%d",&tk);
 if(tk>=5000)
 {
    printf("go to the cox's bazar\n");
    if(tk>=10000)
    {
     printf("then go to cenmartin\n");
    }
    else
    {
     printf("then come back to home\n");
    }
 }
 else
 {
  printf("don't go anywhere");
 }

 return 0;
}