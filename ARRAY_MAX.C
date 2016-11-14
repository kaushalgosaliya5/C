# include <stdio.h>
void main()
{
  int i,x[10],max;

  printf ("\n this program is to array num by [1 to 10]: \n");
  
  for (i=0;i<10;i++)
   {
    printf ("\n enter any number :");
    scanf ("%d",&x[i]);
   }

   max = x[0];

   for (i=0;i<10;i++ )
   {
     if (x[i]> max)
     {
       max = x[i];
     }
   }

   printf ("\n maximum number is : %d",max);

 scanf ("%d");
}