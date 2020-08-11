##include <stdio.h>

int main(){

  int n;
  int i, sum=0;

  printf("1부터 n까지의 합을 구하는 프로그램입니다. \nn의 값을 입력해주세요.\n");
  scanf("%d",&n);

  if(n<1 || n>10000)
  {
    printf("n은 1에서 10,000 사이의 값만 가능!\n");
  }

  for(i=0;i<n+1;i++)
  {
    sum += i;
  }

  printf("sum = %d\n",sum);

  return 0;
}
