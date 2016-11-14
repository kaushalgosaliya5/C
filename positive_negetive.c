#include <stdio.h>
void main()
{
  int num;

  printf ("\n enter you any positive & negetiove num :");
  scanf ("%d",&num);

  if ( num > 0 )
  {
    printf ("\n this number is POSITIVE number : %d",num);
  }
  else  if ( num < 0 )
  {
    printf ("\n this number is NEGETIVE number : %d",num);
  }
 else
  {
    printf ("\n this number is ZERO number : %d",num);
  }
  scanf ("%d");
}