#include <stdio.h>
#include <stdlib.h>

void main(int arg, int *argv[])
{
  if (arg < 2)
  {
    printf("enter some value in cmd line");
    return;
  }
  int a[arg];
  int j = 1;
  for (int i = 0; i < arg; i++)
  {
    a[i] = atoi(argv[j]);
    j++;
  }
  int sum = 0;
  for (int i = 0; i < arg; i++)
  {
    sum += a[i];
    printf("%d ", a[i]);
  }
  printf("sum is %d ", sum);
}