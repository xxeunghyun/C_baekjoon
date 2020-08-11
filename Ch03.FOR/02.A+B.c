#include <stdio.h>

int main(){

  int t,a,b; //pair 갯수
  int i;

  printf("몇 쌍? ");
  scanf("%d",&t);

  printf("순서대로 입력해주세요.\n");

  for(i=0;i<t;i++)
  {
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
  }
  
  return 0;
}
