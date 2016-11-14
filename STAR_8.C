#include<stdio.h>
void main()
{
  int num,r,c;

  printf ("\n enter any number :");
  scanf ("%d",&num);

  r = num;

  while (r > 0)
  {
    c = 1;

    while (c <= r)
    {
      printf ("*");
      c++;
    }
    printf ("\n");
    r--;
  }
  scanf ("%d");
}