/*
두 정수 A,B 입력받은 후 뺄셈값 출력
단, A는 10미만, B는 0 초과

*/

#include <stdio.h>

int main(){

  int A,B;


    printf("정수 두개 차례대로 입력하세요.\n");
    scanf("%d %d",&A,&B);

    if(A<=0)
    {
      printf("A는 0보다 커야합니다.\n");
      exit(1);
    }

    if(B>=10)
    {
      printf("B는 10보다 작아야합니다.\n");
      exit(1);
    }

  printf("A(%d) - B(%d) = %d\n",A,B,A-B);

  return 0;
}
