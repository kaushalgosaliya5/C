# include <stdio.h>
void main()
{
   int n1,n2,num,sum;

   printf ("\n enter any number :");
   scanf ("%d",&num);

   n1 = 0;
   n2 = 1;

   printf ("\n %d",n1);
   printf ("\n %d",n2);

   sum = n1 + n2;

   while ( sum <= num )
    {
      printf ("\n %d",sum);
      n1 = n2;
      n2 = sum;
      sum = n1 + n2;
    }
    scanf ("%d");
}