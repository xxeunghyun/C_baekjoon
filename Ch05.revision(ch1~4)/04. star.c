/*
첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
N(1 ≤ N ≤ 100)

n=3일때
*
**
***
**
*로 출력

*/

#include <stdio.h>

int main(){

  int n,i,j;
  int last;

  printf("n의 값 입력: ");
  scanf("%d",&n);
  printf("\n");

  last = 2*n-1;

  printf("%d열까지 특정한 패턴의 별 모양 출력\n",last);

  //중간까지는 늘어
  for(i=0;i<n+1;i++)
  {
    for(j=0;j<i;j++)
    {
      printf("*");
    }
printf("\n");
  }

  //중간+1 부터 마지막까지는 줄어듦
  for(i=1;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
