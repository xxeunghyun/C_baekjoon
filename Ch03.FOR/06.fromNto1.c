#include <stdio.h>

int main(){

  int n,i;

  printf("n의 값을 입력해주세요!\n");
  scanf("%d",&n);

  for(i=n;i>0;i--)
  {
    printf("%d\n",i);
  }
  
  return 0;
}
