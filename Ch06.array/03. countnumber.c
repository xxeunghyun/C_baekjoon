/*
세 개의 자연수 A, B, C가 주어질 때 A×B×C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

예를 들어 A = 150, B = 266, C = 427 이라면

A × B × C = 150 × 266 × 427 = 17037300 이 되고,

계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
*/

#include <stdio.h>
#define SIZE 20

int main(){

  int a,b,c;
  int mul=1,mod;
  int i,j,tmp;
  int arr[SIZE]={};

  printf("a,b,c의 값을 차례대로 입력해주세요.\n");
  scanf("%d %d %d",&a,&b,&c);

  mul = a*b*c;
  printf("a*b*c = %d\n",mul);

  while(mul >= 1)
  {
    arr[mul%10]++;
    mul/=10;
  }

	for (i = 0; i < 10; i++)
  		printf("%d\n", arr[i]);

  return 0;
}
