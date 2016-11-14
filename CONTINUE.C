# include <stdio.h>
void main()
{
  int i;

  printf ("\n use for : 'continue' = 5 \n");

  for (i=1;i<10;i++)
  {
     if (i==5)
     {
       continue;
     }
   printf ("\t %d \n",i);
  }
  scanf ("%d");
}