#include <stdio.h>
#include <string.h>

int main (){

  int cnt;
  int n;
  char arr[80];
  int sum;

  printf("테스트 케이스 개수?\n");
  scanf("%d",&n);


  //문자열 입력받기
  for(int i=0;i<n;i++)
  {
    printf("문자열 입력!\n");
    scanf("%s",arr);

    cnt=0;
    sum=0;


      for(int j=0;j<strlen(arr);j++)
      {

        if(arr[j] == 'O')
        {
          cnt ++;
          sum+=cnt;
        }
          else
          {
              cnt =0;
          }

        }
        printf("%d\n",sum);
  }
  return 0;
}
