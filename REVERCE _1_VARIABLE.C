# include <stdio.h>
void main()
{
  int num;

  printf ("\n this program is reverse number is one variable");

  printf ("\n\n enter any number :");
  scanf ("%d",&num);

  printf ("\n\n this number reverce  is :");
  while (num > 0)

  {

    printf (" %d ",num % 10);
    num = num / 10;

  }
  scanf ("%d");
}