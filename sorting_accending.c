# include <stdio.h>
void main()
{
     int x[]={5,13,31,9,2};
    int i,j,tmp;

    printf ("\n array before sortion :");


    for (i=0;i<5;i++)
    {
      printf ("\n %d:",x[i]);
    }

    for (i=0;i<=3;i++)
    {
      for (j=0;j<=3-i;j++)
      {
        if( x[j+1] < x[j])  // ">" dicending   "<" accending
         {
           tmp = x[j];
           x[j] = x[j+1];
           x[j+1] = tmp;
         }
      }
    }

   printf("\n array after sortin :");

   for( i=0; i<5; i++)
   {
    printf ("\n %d",x[i]);
   }
   scanf ("%d");
}










