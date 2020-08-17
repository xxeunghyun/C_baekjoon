/*
상근날드에서 가장 잘 팔리는 메뉴는 세트 메뉴이다.
주문할 때, 자신이 원하는 햄버거와 음료를 하나씩 골라,
세트로 구매하면, 가격의 합계에서 50원을 뺀 가격이 세트 메뉴의 가격이 된다.

햄버거는 총 3종류 상덕버거, 중덕버거, 하덕버거가 있고, 음료는 콜라와 사이다 두 종류가 있다.
햄버거와 음료의 가격이 주어졌을 때, 가장 싼 세트 메뉴의 가격을 출력하는 프로그램을 작성하시오.

입력은 총 다섯 줄이다. 첫째 줄에는 상덕버거, 둘째 줄에는 중덕버거, 셋째 줄에는 하덕버거의 가격이 주어진다.
넷째 줄에는 콜라의 가격, 다섯째 줄에는 사이다의 가격이 주어진다. 모든 가격은 100원 이상, 2000원 이하이다.
*/

#include <stdio.h>

int main(){

  int burger[3];
  int beverage[2];
  int tmp,i,j;
  int cheapest;


//버거 가격 입력받
  printf("버거 가격 차례로 입력:\n");

  for(i=0;i<3;i++)
  {
    printf("W ");
    scanf("%d",&burger[i]);

  }
  printf("\n");

//가장 싼 버거 가격 찾
    for(i=0;i<3;i++)
    {
      for(j=0;j<2;j++)
      {
        if(burger[j] > burger[j+1])
        {
          tmp = burger[j];
          burger[j] = burger[j+1];
          burger[j+1] = tmp;
        }
      }
    }

      printf("제일 싼 버거 가격: %d원\n",burger[0]);

//음료 가격 입력 받기
  printf("\n음료 가격 차례로 입력:\n");

  for(i=0;i<2;i++)
  {
    printf("W ");
    scanf("%d",&beverage[i]);
  }
  printf("\n");

 //가장 싼 음료 가격 찾기
 for(i=0;i<2;i++)
 {
   for(j=0;j<1;j++)
   {
     if(beverage[j] > beverage[j+1])
     {
       tmp = beverage[j];
       beverage[j] = beverage[j+1];
       beverage[j+1] = tmp;
     }
   }
 }

   printf("제일 싼 음료 가격: %d원\n",beverage[0]);
   printf("\n");

   cheapest = burger[0] + beverage[0] - 50;
   printf("제일 싼 세트의 가격: %d원\n",cheapest);

  return 0;
}
