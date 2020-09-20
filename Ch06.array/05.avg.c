/*
최댓값 = int main(int argc, char const *argv[]) {
  모든 점수를 점수/M*100

  ex: 최고점 M = 70  수학점수 = 50 >> 수학 점수 = 50/70*100 = 71.44
  N = 과목 개
  return 0;
}
*/

#include <stdio.h>

int main()
{

  int N;
  int M; //max
  int tmp;
  int sum;
  double final;
  int arr[1000];

  double avg;

  printf("시험 본 과목의 개수? ");
  scanf("%d",&N);

  printf("성적을 입력해주세요\n");

  for(int i=0;i<N;i++)
  {
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N-1;j++)
    {
      if(arr[j] < arr[j+1])
      {
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;

      }
    }
  }

  for(int i=0;i<N;i++)
  {
    M = arr[0];
  }

  printf("최대 점수: %d\n",M);

  for(int i=0;i<N;i++)
  {
    sum += arr[i];
  }

    printf("sum = %d\n",sum);

  avg = (double)sum/N;

  printf("avg = %.2f\n",avg);

  final = avg / M * 100;

  printf("조작된 평균: %.6f\n",final);

return 0;
}
