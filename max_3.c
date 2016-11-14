#include<stdio.h>
void main()
{
  int n1,n2,n3,max;

  printf ("\n this program is maximum given 3 number");

  printf ("\n\n enter value of n1 :");
  scanf ("%d",&n1);

  printf ("\n enter value of n2 :");
  scanf ("%d",&n2);

  printf ("\n enter value of n3 :");
  scanf ("%d",&n3);

  max = n1;

  if (n2 > max)
  {
    max = n2;
  }

  if (n3 > max)
  {
    max = n3;
  }

 printf ("\n your maximum number is : %d",max);
 scanf ("%d");
}