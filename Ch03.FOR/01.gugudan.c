#include <stdio.h>

int main(){

  int i;
  int n;

  printf("몇 단? ");
  scanf("%d",&n);

  if(n<1 || n>9)
  {
    printf("1~9 사이만 가능합니다.\n");
  }

  printf("%d단을 출력합니다.\n",n);

  for(i=1;i<10;i++)
  {
    printf("%d * %d = %d\n",n,i,n*i);
  }


  return 0;
}
