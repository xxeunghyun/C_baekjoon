/*
출력예시: n이 5일
********* - 9
 ******* - 7
  ***** - 5
   ***
    *
   ***
  *****
 *******
*********
*/

#include <stdio.h>

int main(){

  int n,i,j,k;
  int last,m;

  printf("n의 값은?");
  scanf("%d",&n);

  last = 2*n-1;
  m = n-1;

  //윗부분
  /*
  ********* - 9 공백=0
   ******* - 7 1
    ***** - 5 2
     *** 3
      *  4 */

    for(i=1;i<2*n;i++) //전체 모래시계 높이
    {
      for(j=1;j<2*n;j++) //한줄 *+공백 길이 합
      {
        if(j>=n-m && j<=n+m) //1~9
        {
          printf("*");
        }
        else if(j<n-m)
        {
          printf(" ");
        }
      }

      if(i < n) m--;
      else m++;

      printf("\n");
    }


  return 0;
}
