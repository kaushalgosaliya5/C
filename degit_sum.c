# include <stdio.h>
void main()
{
  int num,rem,sum;

  printf ("\n enter any number :");
  scanf ("%d",&num);

  sum = 0;

  while ( num > 0 )
  {
    rem = num % 10;
    sum = sum + rem;
    num = num / 10;
  }

  printf ("\n enter number per degite sum is : %d",sum);

  scanf ("%d");
}