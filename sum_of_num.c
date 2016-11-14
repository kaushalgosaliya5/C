#include<stdio.h>
void main()
{
  int num,i,sum;

  i = 1;
  sum = 0;

  printf  ("\n this program is sum of 'n'  numbers");

  printf ("\n enter any number :");
  scanf ("%d",&num);

  while (i <= num)
  {
   sum = sum + i;
   i = i + 1;
  }

  printf ("\n your %d number to sum is : %d",num,sum);
  scanf ("%d");

}