/*
전체 테스트 갯수 N개 입력받기
각 테스트마다 입력받을 점수들 입력받기
각 케이스마다의 평균 구하기
평균보다 높으면 포함 이후 높은 비율 구하기
*/


#include <stdio.h>

int main()
{
  int N,num;
  int arr[10];
  int score[10];

  double avg=0;

  int cnt=0;
  double perc=0;

  //전체 테스트 갯
  printf("입력받을 테스트 갯수\n");
  scanf("%d",&N);

  printf("입력받을 점수 갯수\n");
  for(int i=0;i<N;i++)
  {
   int sum=0;
    scanf("%d",&num);

    for(int j=0;j<num;j++)
    {
      scanf("%d",&score[j]);
      sum += score[j];

    }
     avg = (double)sum/num;

    for(int j=0;j<num;j++)
    {
      if(avg< score[j])
      {
        cnt++;
      }
    }


      perc = (double)cnt/num*100;

      printf("평균을 넘는 학생수율 = %.3f %%",perc);




  }

  return 0;
}
