# include <stdio.h>
void main()
{
  int i,x[10],max,min;

  printf ("\n this program is to array num MAX TO MIN by [1 to 10]: \n");

  for (i=0;i<10;i++)
   {
    printf ("\n enter any number :");
    scanf ("%d",&x[i]);
   }

   max = x[0];

   for (i=0;i<10;i++ )
   {
     if (x[i] > max)
     {
       max = x[i];
     }
   }

   printf ("\n maximum number is : %d",max);

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