#include <stdio.h>

int main(){

  int T,a,b;
  int i;

  printf("몇 쌍의 합? ");
  scanf("%d",&T);

  if(T>1000000 || (a<1 || a>1000) || (b<1 || b>1000))
  {
    printf("오류: T,A,B의 범위를 확인해주세요!\n");
  }

  for(i=0;i<T;i++)
  {
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
  }

  return 0;
}
