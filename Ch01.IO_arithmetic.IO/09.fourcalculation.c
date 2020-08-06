/*
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.
두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10,000)
첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다
*/

#include <stdio.h>

int main(){

  int A,B;

  printf("A와 B 값을 입력해주세요.\n");
  scanf("%d %d",&A,&B);

  do{

    scanf("%d %d",&A,&B);

    if(1>A || B>10000)
    {
      printf("A는 1이상, B는 10,000 이하여야 합니다. 다시 입력해주세요.\n");
    }
  }while(1>A || B>10000);

  printf("A + B = %3d\n",A+B);
  printf("A - B = %3d\n",A-B);
  printf("A * B = %3d\n",A*B);
  printf("A / B = %3d (몫만 출력.)\n",A/B);
  printf("A % B = %3d (나머지만 출력.)\n",A%B);

  return 0;
}
