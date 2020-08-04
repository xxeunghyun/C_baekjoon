/*
두 정수 A,B 입력받은 후 나눗셈 값 출력
단, A는 10미만, B는 0 초과

*/

#include <stdio.h>

int main(){

  int A,B; //몫만 나오지 않고 소수점 아래 9자리까지


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
      //return 0;
      exit(1);
    }

  printf("A(%d) / B(%d) = %.9f\n",A,B,A/B);

  return 0;
}
