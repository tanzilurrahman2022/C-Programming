#include<stdio.h>
void world()
{
  printf("New Programmer\n");
  printf("Programme is End\n");
}

void hello()
{
  printf("From Bangladesh\n");
  world();
  printf("Bangladesh is End\n");
}

int main()
{
  printf("Main is Run\n");
  hello();
  printf("Main is End\n");
  return 0;
}