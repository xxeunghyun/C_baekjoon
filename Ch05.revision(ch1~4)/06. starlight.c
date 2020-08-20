#include <stdio.h>

int main(){

  int n;
  int i,j;

  printf("n 입력. ");
  scanf("%d",&n);
  //printf("\n");

  for(i=1;i<=n*2;i++) //전체 높이
  {
    for(j=1;j<=n;j++) //한 줄당
    {
      if(i%2 == 0) //짝수 줄 > 들여쓰
      {
        if(j%2 == 0)
        {
          printf("*");
        }

        else printf(" ");
      }
     //printf("\n");


      //홀수
      else {
        if(j%2 == 0)
        {
          printf(" ");
        }
        else printf("*");
      }
    }

   printf("\n");

  }
  //printf("\n");
  return 0;
}
