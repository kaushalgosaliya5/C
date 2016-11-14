# include <stdio.h>
void main()
{
  int i,x[10],sum;

  printf ("\n this program is arrat - sum :");

  for (i=0;i<10;i++)
  {
    printf ("\n\n  enter your any number :");
    scanf ("%d",&x[i]);
  }

  printf ("\n you have entered : \n");

  for (i=0;i<10;i++)
  {
    printf (" \n %d",x[i]);
    sum = sum + x[i];
  }

  printf ("\n sum is : %d",sum);

  scanf ("%d");
}