/*
원래 시간보다 45분 빠르게 시간 나타내기
주의: H:0~23, M:0~59
*/

#include <stdio.h>

int main(){
  int org_hour, org_min; //원래 시각
  int new_hour, new_min; //새로 세팅된 시간

  printf("Enter original time(hour, minute) ");
  scanf("%d %d",&org_hour,&org_min);

  if(org_hour>23 || org_hour>0 || org_min>59 || org_min<0)
  {
    printf("0<=HOUR<24 and 0<=MINUTE<60\n");
    return 0;
  }

  printf("\n");


  if(org_min>=45 && org_min<60)
  {
    new_min = org_min - 45;
  }

  else
  {
    new_min = org_min - 45;
    new_min *= -1;
    new_hour = org_hour - 1;
  }


  printf("New time set is %d : %d\n",new_hour,new_min);

  return 0;
}
