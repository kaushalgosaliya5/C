#include<stdio.h>
void main()
{
  int num,r,c,sp;         // sp = space

  printf ("\n enter any number :");
  scanf ("%d",&num);

  r = 1;

  while (r <= num)
  {
    c = 1;sp=1;

    while (sp <= num - r)
    {
      printf (" ");
      sp++;
    }

    while (c <= r)
    {
      printf ("*");     // printf ("*");
      c++;
    }

    printf ("\n");
    r++;
  }
  scanf ("%d");
}