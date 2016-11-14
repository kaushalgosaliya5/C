 #include<stdio.h>
 void main()
 {
   int num,i,fact;

   i=1;
   fact=1;

   printf ("\n this program is 'n' number by fact");

   printf ("\n enter any number :");
   scanf ("%d",&num);

   while ( i <= num )
   {

     fact = fact * i;
     i++;
   }

    printf  ("\n your %d number to fact is : %d",num,fact);
    scanf ("%d");
 }