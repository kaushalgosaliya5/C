# include <stdio.h>
void main()
{
   int n1,n2,tmp;

  printf ("\n this program is exchange value beetween n1 & n2 ");

  printf ("\n\n enter value of n1 :");
  scanf ("%d",&n1);

  printf ("\n enter value of n2 :");
  scanf ("%d",&n2);

  tmp = n1;
  n1 = n2;
  n2 = tmp;

  printf ("\n enter new value of n1 :%d",n1);
  printf ("\n enter new value of n2 :%d",n2);

  scanf ("%d");
}