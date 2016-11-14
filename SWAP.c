#include<stdio.h>
void swap(int *,int *);
void main()
{
  int x,y;

  x = 5;
  y = 7;

  swap(&x,&y);

  printf ("\n value of x is :: %d",x);
  printf ("\n value of y is :: %d",y);

  scanf ("%d");
}

void swap(int *p,int *q)
 {
    int tmp;

    tmp = *p;
    *p = *q;
    *q = tmp;
 }
