#include <stdio.h>

int main(){

  int score[5];
  int sum=0,avg;


  for(int i=0;i<5;i++)
  {
    scanf("%d",&score[i]);

    if(score[i] < 40)
    {
      score[i] = 40;
    }

    sum += score[i];
  }

  avg = sum/5;

  printf("5명 학생의 평균 점수는 %d점입니다.\n",avg);

  return 0;
}
