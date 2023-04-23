// #include<stdio.h>
// int main(){
//   int n;
//   scanf("%d",&n);
//   int a[n];
//   for(int i=0; i<n; i++)
//   {
//     scanf("%d", &a[i]);
//   }
//   int zero=0,one=0,two=0;
//   for(int i=0; i<n; i++)
//   {
//     if(a[i]==0)
//     {
//       zero++;
//     }
//     if(a[i]==1)
//     {
//       one++;
//     }
//     if(a[i]==2)
//     {
//       two++;
//     }
//   }
//   printf("0 - %d\n",zero);
//   printf("1 - %d\n",one);
//   printf("2 - %d\n",two);
//   return 0;
// }

#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
  int cnt[7]={0};
  for(int i=0; i<n; i++)
  {
    int val=a[i];
    cnt[val]++;
  }
  for(int i=0; i<=6; i++)
  {
    printf("%d - %d\n", i,cnt[i]);
  }
 
 
 
  return 0;
}

