# include <stdio.h>
void main()
{
  int num,i,sum;

  printf  ("\n this program is sum of 'n'  numbers");

  printf ("\n enter any number :");
  scanf ("%d",&num);

  for(i=1,sum=0;i<=num;i++)
  {
   sum = sum + i;
  }

  printf ("\n your %d number to sum is : %d",num,sum);
  scanf ("%d");
}