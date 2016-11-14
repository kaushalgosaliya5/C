# include <stdio.h>
void main()
{
  float n1,n2,tmp;

  printf ("\n enter value of n1 :");
  scanf ("%f",&n1);

  printf ("\n enter value of n2 :");
  scanf ("%f",&n2);

  tmp = n1;
  n1 = n2;
  n2 = tmp;

  printf ("\n change value of n1 : %.2f",n1);
  printf ("\n change value of n2 : %.2f",n2);

  scanf ("%f");
}