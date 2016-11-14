#include<stdio.h>
void math(int,int*,int*);
void main()
{
  int x,square,quib;

  printf("\n enter any number :: ");
  scanf("%d",&x);

  math(x,&square,&quib);

  printf("\n your number square is :: %d",square);
  printf("\n your number quib is :: %d",quib);

  scanf("%d");
}

void math(int x,int *s,int *q)
{
  *s = x * x;
  *q = x * x * x;
}
