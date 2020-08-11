#include <stdio.h>

int main(){

  int i,n,a,b;

  printf("몇 쌍?\n");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    scanf("%d %d",&a,&b);
    printf("case # %d : %d + %d = %d\n",i+1,a,b,a+b);
  }
  
  return 0;
}
