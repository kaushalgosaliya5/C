# include <stdio.h>
void main()
{
   int n1,n2,min,i,gcd;

   printf ("\n this program is 2 numbers g.c.d");

   printf ("\n enter value of n1 :");
   scanf ("%d",&n1);

   printf ("\n enter value of n2 :");
   scanf ("%d",&n2);

   if ( n1 < n2)
   {
     min = n1;
   }
   else
   {
     min = n2;
   }

  for (i=1;i<=min;i++)
   {
     if (( n1 % i == 0 )&&( n2 % i == 0))
     {
       gcd = i;
     }
   }

   printf ("\n g.c.d : %d",gcd);
   scanf ("%d");
}