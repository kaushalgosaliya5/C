#include<stdio.h>
void main()
 {
   int x[5];
   int i,j,tmp;

   printf ("\n this program is sorting by accending");

   for(i=0;i<5;i++)
   {
      printf ("\n\n\n enter your %d any number : ",i+1);
      scanf ("%d",&x[i]);
   }

   printf ("\n array before sorting :");

   for (i=0;i<5;i++)
   {
     printf (" %d ",x[i]);
   }

   for ( i=0;i<=3;i++ )
    {
       for (j=0;j<=3-i;j++)
        {
          if ( x[j+1] < x[j] )
          {
            tmp = x[j];
            x[j] = x[j+1];
            x[j+1] = tmp;
          }
        }
    }

   printf ("\n\n\n array after sorting :");

   for (i=0;i<5;i++)
   {
    printf (" %d ",x[i]);
   }
  scanf ("%d");
}