# include <stdio.h>
void main()
{
  int num,i,x[10];

  for (i=0;i<10;i++)
    {
      printf ("\n enter your %d number : ",i+1);
      scanf ("%d",&x[i]);
    }

  printf ("\n your choice number  : ");
  scanf ("%d",&num);

   for (i=0;i<10;i++)
   {
      if (x[i] == num)
      {
        printf ("\n your select %d number position is : %d",num,i+1);
        break;
      }

      if (i == 10)
      {
        printf ("\n value does not exites");
      }
   }
 scanf ("%d");
}