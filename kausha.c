 # include <stdio.h>
 void main()
 {
   int num,sum,rem,onum;

   printf ("\n enter any number :");
   scanf ("%d",&num);

   onum = num;

   sum = 0;

   while ( num > 0 )

   {
     rem = num % 10;
     sum = sum + (rem*rem*rem);
     num = num / 10;
   }

   if ( onum == sum )
   {
     printf ("\n given number is almstrong number ");
   }
   else
   {
     printf ("\n given number is not almostrong number");
   }

 }