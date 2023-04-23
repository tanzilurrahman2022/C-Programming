#include<stdio.h>
int main(){
 char s[1000001];
 scanf("%s", &s);
 int count=0;
 int i=1;
 while(s[i]!='\0')
 {
  count++;
  i++;
}
  printf("%d\n",count);
 return 0;
}