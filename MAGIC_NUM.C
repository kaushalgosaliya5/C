# include <stdio.h>
void main()
{
   int num,i,sum=0,nsum=0,rem;       // nsum = new-sum

   printf ("\n enter any number :");
   scanf ("%d",&num);

   for (i=1;i<=num;i++)
   {
     sum = sum + i;
   }

   while (sum > 0)
   {
     rem = sum % 10;
     nsum = nsum + rem;
     sum = sum / 10;
   }

   if (nsum == num)
   {
     printf ("\n this number is magic number ");
   }
   else
   {
     printf ("\n this number is not magic number ");
   }

  scanf ("%d");

}








