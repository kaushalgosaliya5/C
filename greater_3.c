 # include <stdio.h>
 void main()
 {
    int x,y,z;

    printf ("\n this program is greater num mor-than 3 number ");

   printf ("\n enter value of x :");
   scanf ("%d",&x);

   printf ("\n enter value of y :");
   scanf ("%d",&y);

   printf ("\n enter value of z :");
   scanf ("%d",&z);

   if ( x > y )
   {
     if (x>z)
     {
      printf ("\n greater num is : %d",x);
     }
     else
     {
      printf ("\n greater num is : %d",z);
     }
   }
   else
   {
     if ( y > z )
     {
       printf ("\n greater num is : %d",y);
     }
     else
     {
      printf ("\n greater num is : %d",z);
     }
   }

  scanf ("%d");
 }