#include<stdio.h>
void main()
{
  int x[3][3];
  int r,c;

  printf ("\n enter value of matrix : \n");

  for (r=0;r<3;r++)
  {
    for(c=0;c<3;c++)
     {
       printf ("\n enter value [%d][%d] :",r,c);
       scanf ("%d",&x[r][c]);
     }
  }

  printf ("\n matrix is : \n");

 for (r=0;r<3;r++)
  {
    for(c=0;c<3;c++)
     {
       printf ("\t %d \t",x[r][c]);
     }
     printf ("\n");
  }

  printf ("\n inverse is : \n");

  for (r=0;r<3;r++)
  {
    for(c=0;c<3;c++)
     {
       printf ("\t %d \t",x[c][r]);
     }
     printf ("\n");
  }
 scanf ("%d");
}