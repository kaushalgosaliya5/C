#include<stdio.h>
void main()
{
  int x;
  int *p;

  x = 5;
  p = &x;

  printf("\n %d",x);
  printf ("\n %d",&x);
  printf("\n %d",*p);
  printf("\n %d",p);
  printf("\n %d",&p);

  scanf ("%d"); 
}