# include <stdio.h>
void main()
{
   int page,amt;

   printf ("\n printing amount typing charges = 3; \n 1st copy charges = 5 \n any copy charges = 3");

   printf ("\n enter number of pages :");
   scanf ("%d",&page);

   amt = 0;

   if (page==1)
   {
     amt = 3 + 5;
   }
   else
   {
      amt = (page * 3) + 5 +  ((page - 1) * 3 );
   }

   printf ("\n enter your amount : %d",amt);

   scanf ("%d");
}