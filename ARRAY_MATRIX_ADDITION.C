# include <stdio.h>
void main()
{
  int x[3][3],y[3][3],z[3][3];
  int r,c;

  printf ("\n enter value matrix 1 : \n");

  for(r=0;r<3;r++)
  {
    for (c=0;c<3;c++)
     {
       printf ("\n enter value [%d][%d] :",r,c);
       scanf ("%d",&x[r][c]);
     }
  }

   printf ("\n enter value matrix : 2 \n");

  for (r=0;r<3;r++)
   {
     for(c=0;c<3;c++)
     {
      printf ("\n enter value [%d][%d] :",r,c);
      scanf ("%d",&y[r][c]);
     }
   }

  for (r=0;r<3;r++)
   {
      for(c=0;c<3;c++)
       {
         z[r][c] = x[r][c] + y[r][c];
       }
   }

  printf ("\n matrix  1 is  : \n");

  for(r=0;r<3;r++)
  {
     for (c=0;c<3;c++)
     {
       printf ("\t %d \t",x[r][c]);
     }
    printf ("\n");
  }

  printf ("\n matrix 2 is : \n");

  for (r=0;r<3;r++)
  {
    for (c=0;c<3;c++)
     {
      printf ("\t %d \t",y[r][c]);
     }
     printf ("\n");
  }

  printf ("\n two matrix  sum is : \n");
  for(r=0;r<3;r++)
   {
     for(c=0;c<3;c++)
      {
        printf ("\t %d \t",z[r][c]);
      }
     printf ("\n");
   }
  scanf ("%d");
}