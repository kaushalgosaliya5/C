# include <stdio.h>
void main()
{
   int n1,n2,n3;

   printf ("\n enter value three number :");
   scanf ("%d%d%d",&n1,&n2,&n3);

   printf ("\n\t num \t square \tquib");
   printf ("\n\t--------------------------------");

   printf ("\n\t %d  \t %d \t\t%d",n1,n1*n1,n1*n1*n1);
   printf ("\n\t %d  \t %d \t\t%d",n2,n2*n2,n2*n2*n2);
   printf ("\n\t %d  \t %d \t\t%d",n3,n3*n3,n3*n3*n3);

   scanf ("%d");
}