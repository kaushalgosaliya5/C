#include<stdio.h>
#include<alloc.h>

void main()
{
  int *p;

  p = (int*)malloc(sizeof(int));

  *p = 50.2;

  printf("\n your ans is :: %d",*p);

  scanf("%d");
}