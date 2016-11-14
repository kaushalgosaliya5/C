# include <stdio.h>
void  main()
{
   float sum = 0;
   int n,i,j,d;

   printf ("\n enter any number :");
   scanf ("%d",&n);

   for (i=1;i<=n;i++)
   {
      d = 1;

      for (j=1;j<=i;j++)
       {
         d = d * i;
       }

      sum = sum + (float)1 / d;
   }

   printf ("\n sum is : %f",sum);

   scanf ("%d");
}
