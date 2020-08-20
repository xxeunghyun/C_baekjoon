#include <stdio.h>
#define SIZE 50

int main(){

  int n,arr[SIZE];
  int i;
  int max,min;

  printf("array size?\n");
  scanf("%d",&n);

  if(n<1 || n>1000000)
  {
    printf("size should be between 1 and 1,000,000\n");
    return 0;
  }

  printf("enter elements of the array. \n");

  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);

  }

  max=min=arr[0]; //for comparison

  for(i=0;i<n;i++)
  {
    if(arr[i] > max)
      max = arr[i];

    if(arr[i] < min)
      min = arr[i];
  }


  printf("max = %d , min = %d\n",max,min);


  return 0;
}
