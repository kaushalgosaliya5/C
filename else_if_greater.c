# include <stdio.h>
void main()
{
   int n1,n2;

   printf ("\n enter value of n1 :");
   scanf ("%d",&n1);

   printf ("\n enter value of n2 :");
   scanf ("%d",&n2);

   if ( n1 > n2 )
   {
     printf ("\n greater number is : %d",n1);
   }

   else if ( n2 > n1 )
   {
     printf ("\n greater  number is : %d",n2);
   }

  else
  {
   printf ("\n both numbe are equar :%d--%d",n1,n2);
  }


}