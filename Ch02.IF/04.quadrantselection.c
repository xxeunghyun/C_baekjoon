/*
1사분면- ++
2- -+
3- --
4- +-
*/

#include <stdio.h>

int main(){

  int x,y;

  printf("x와 y좌표를 입력해주세요.\n");
  scanf("%d %d",&x,&y);

  if(x>1000 || x<-1000 || x==0)
  {
      printf("-1000<=x<=1000이며 x는 0일 수 없음\n"); return 0;
  }

  if(y>1000 || y<-1000 || y == 0)
  {
      printf("-1000<=y<=1000이며 y는 0일 수 없음\n"); return 0;
  }

  // first quadrant
  if(x>0 && y>0) printf("제 1사분면입니다.\n");
  if(x<0 && y>0) printf("제 2사분면입니다.\n");
  if(x<0 && y<0) printf("제 3사분면입니다.\n");
  if(x>0 && y<0) printf("제 4사분면입니다.\n");


  return 0;
}
