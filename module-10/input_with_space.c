// #include<stdio.h>
// #include<string.h>
// int main(){
//   char a[23];
//   gets(a);
//   printf("%s",a);        
//   return 0;
// }


#include<stdio.h>
#include<string.h>
int main(){
  char a[23];
  fgets(a,20,stdin);
  printf("%s",a);        
  return 0;
}
