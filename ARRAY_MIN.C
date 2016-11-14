# include <stdio.h>
void main()
{
  int i,x[10],min;         // min = minimum number

  printf ("\n this program is to array num by [1 to 10]: \n");

  for (i=0;i<10;i++)
   {
    printf ("\n enter any number :");
    scanf ("%d",&x[i]);
   }

   min = x[0];

   for (i=0;i<10;i++ )
   {
     if (x[i] < min)
     {
       min = x[i];
     }
   }

   printf ("\n minimum number is : %d",min);

 scanf ("%d");
}