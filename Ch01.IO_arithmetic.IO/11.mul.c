#include <stdio.h>

int main(){

  int num1, num2;
  int result;
  int ill,sip,baek;

  printf("세자리 수 두개 입력!\n");
  scanf("%d %d",&num1,&num2);

  //if not 세자리
  if((num1>1000 || num1<100) || (num2>1000 || num2<100))
    {
      printf("3자리 수만 입력 가능.\n");
    }

  // (3) = num1 * num2의 일의 자리
  ill = (num1 * (num2 % 10));
  printf("num1 * num2의 일의 자리 : %d\n",ill);

  // (4) = num1 * num2의 십의 자리 (472*385 = 80!)
  sip = num1 * ((num2%100) - (num2%10))/10;
  printf("num1 * num2의 십의 자리 : %d\n",sip);

  // (5) = num1 * num2의 백의 자리
   baek = (num1 * (num2/100));
   printf("num1 * num2의 백의 자리 : %d\n",baek);

  // (6) 최종값
    result = ill + sip*10 + baek*100;
  printf("최종 곱셈값: %d\n",result);

  return 0;
}
