# include <stdio.h>
void main()
{

  int num,i=0,x[10];

  printf ("\n enter decimal number :");
  scanf ("%d",&num);

  while (i > 0)
  {
    x[i] = num % 2;

    i++;

    num = num / 2;

   }

  i--;

  printf ("\n binary is :");

  while ( i > 0 )
  {
    printf ("\n %d",x[i]);
    i--;
  }
}