#include <stdio.h>
#define SIZE 50

int main(){

  int n,arr[SIZE],i;
  int pos;
  int max;

  printf("size of array?\n");
  scanf("%d",&n);

  printf("enter the elements\n");

  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }

  max = arr[0];

  for(i=0;i<n;i++)
  {
    if(arr[i] > max)
      {
        max = arr[i];
        pos = i+1;
      }
  }

  printf("the biggest number is %d and its position is %dth\n",max,pos);

  return 0;
}
