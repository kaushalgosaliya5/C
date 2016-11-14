# include <stdio.h>
void main()
{
  int n1,n2,i=2,max;

  printf ("\n this program is 2 number l.c.m");

  printf ("\n enter value of n1 :");
  scanf ("%d",&n1);

  printf ("\n enter value of n2 :");
  scanf ("%d",&n2);

   if (n1 > n2)
   {
      max = n1;
   }
   else
   {
      max = n2;
   }

  i = max;

  while (i <= n1 * n2 )
  {
    if (( i % n1 == 0)&&( i % n2 == 0))
    {
      printf ("\n l.c.m : %d",i);
      break;
    }
    i++;
  }
  scanf  ("%d");
}