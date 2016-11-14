# include  <stdio.h>
# include <math.h>
void main()
{
   int n,i,d;
   float sum=0;

   printf ("\n enter any number :");
   scanf ("%d",&n);

   for (i=1;i<=n;i++)
   {
    d = pow(i,i);

    sum = sum + (float)1/d;

   }

  printf ("\n sum is : %f",sum);

  scanf ("%d");
}