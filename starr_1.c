# include <stdio.h>
void main()
{
  int num,r,c,sp,logic,n,y;

  printf ("\n enter your choice number :");
  scanf ("%d",&num);

  r=1;
  n=1;

  while (r <= num)
  {
    logic=0;
    sp = 1;

    while (sp <= 2*(num - r))
    {
      printf (" ");
      sp++;
    }

    c = 1;
    y = 1;

   while (c <= n)
   {
     printf ("%d ",y);

      if (y == r)
      {
        logic =1;
      }

      if (logic == 0)
      {
       y++;
      }

      else
      {
        y--;
      }
    c++;
   }
  r++;

  n = n + 2;

  printf ("\n");

 }
 scanf ("%d");
}