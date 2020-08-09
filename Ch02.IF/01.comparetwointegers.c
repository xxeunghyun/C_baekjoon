/*
compare two integers
*/

#include <stdio.h>

int main(){

  int A,B;

  printf("A와 B값을 입력해주세요\n");
  scanf("%d %d",&A,&B);

  if(A < -10000) printf("A는 -10,000 이상!\n");
  if(B > 10000) printf("B는 10,000 이하!\n");

  if(A > B) printf("A>B\n");
  else if(A < B) printf("A<B\n");
  else printf("A=B\n");

return 0;
}
