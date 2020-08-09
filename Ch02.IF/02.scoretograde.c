/*
A 90~100
B 80~89
C 70~79
D 60~69
F else
*/

#include <stdio.h>

int main(){

  int score;

  printf("시험 점수를 학점으로 변환하는 프로그램입니다.\n");
  printf("시험 점수를 입력해주세요.\n");
  scanf("%d",&score);

  if(score>=90 && score<=100) printf("A\n");
  else if(score>=80) printf("B\n");
  else if(score>=70) printf("C\n");
  else if(score>=60) printf("D\n");
  else printf("F\n");


  return 0;
}
