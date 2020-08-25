#include <stdio.h>

int main(){

  int arr[10],cnt[42]={0};
  int i;
  int sum=0;

  for(i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
    arr[i] = arr[i]%42;
  }

  for(i=0;i<10;i++)
  {
    cnt[arr[i]]++;

    if(cnt[arr[i]] == 2)
    {
      cnt[arr[i]]--;
    }
  }

  for(i=0;i<42;i++)
  {
    sum+=cnt[i];
  }

  printf("%d\n",sum);

  return 0;
}
