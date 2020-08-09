#include <stdio.h>

int main(){

  int num1,num2,num3;
  int a,b,c,d,e;

  printf("A,B,C 값 입력: ");
  scanf("%d %d %d",&num1,&num2,&num3);

  if(2> num1 || num3>10000)
  {
  printf("A는 2 이상, C는 10,000 이하여야 함\n");
  return 0;
  }

  a = num1+num2;
  b = num1%num3;
  c = num1*num2;
//  d = A%C;
  e = num2%num3;

  printf("(A+B) % C = %d\n",a%num3);

  printf("((A%C) + (B%C)) % C = %d\n",(b+e)%num3);

  printf("(A×B)%C = %d\n",c%num3);

  printf("((A%C) × (B%C))%C = %d\n",(b*e)%num3);


return 0;
}
