#include<stdio.h>
int main(){
  int n; 
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
  for(int i=n-1;i>=0;i--)
  {
    if(i%2==0)
    {
      printf("%d ",ar[i]);
    }
  }
  return 0;
}
