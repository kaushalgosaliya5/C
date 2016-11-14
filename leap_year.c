 # include <stdio.h>
 void main()
 {
   int r,year;

  printf ("\n this program is leap-year");

   printf ("\n enter any year :");
   scanf ("%d",&year);

   r = year % 4;

   if (r==0)
   {
    printf ("\n this year is leap-year : %d",year);
   }

   else
   {
    printf ("\n this year is not leap-year : %d",year);
   }

   scanf ("%d");
 }