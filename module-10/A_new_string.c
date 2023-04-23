#include<stdio.h>
int main(){
  char s[1001],t[1001];
  scanf("%s %s",&s,&t);
  int lenS=strlen(s);
  int lenT=strlen(t);
  printf("%d %d\n",lenS,lenT);
  printf("%s %s\n",s,t);       
  return 0;
}
