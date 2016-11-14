 #include<stdio.h>
 void main()
 {
   int num,i,fact;

   printf ("\n this program is 'n' number by fact");

   printf ("\n enter any number :");
   scanf ("%d",&num);

   for (i=1,fact=1;i<=num;i++)
   {
     fact = fact * i;
   }

    printf  ("\n your %d number to fact is : %d",num,fact);
    scanf ("%d");
 }