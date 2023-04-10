#include<stdio.h>
int main(){
  char x;
  scanf("%c",&x);
  if(x>='A' && x<='Z')
  {
      printf("ALPHA\nIS CAPITAL");
  }
  else if(x>='a' && x<='z')
  {
      printf("ALPHA\nIS SMALL");
  }
  else
  {
    printf("IS DIGIT");
  }

  return 0;
}


// #include<stdio.h>
// int main(){
  // char x;
  // scanf("%c",&x);
  // if(x>='0' && x<='9')
  // {
    // printf("IS DIGIT\n");
  // }
  // else 
  // {
    // printf("ALPHA\n");
    // if(x>='a' && x<='z')
    // {
      //  printf("IS SMALL\n");
    // }
    // else
    // {
      // //  printf("IS CAPITAL\n");
    // }
  // }
  // return 0;
// }
// 