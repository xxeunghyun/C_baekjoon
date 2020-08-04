/*
두 정수 A,B 입력받은 후 덧셈값 출력
*/

#include <stdio.h>

int main(){

  int A,B;

  printf("정수 두개 차례대로 입력하세요.\n");
  scanf("%d %d",&A,&B);

  printf("A(%d) + B(%d) = %d\n",A,B,A+B);

  return 0;
}
