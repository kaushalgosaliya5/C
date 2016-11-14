# include <stdio.h>
void main()
{
   int num,n1,n2,sum;

   printf ("\n enter your number :");
   scanf ("%d",&num);

   n1 = 0;
   n2 = 1;

   printf ("\n %d \n %d \n",n1,n2);

   for (sum = n1 + n2 ; sum <= num ; sum = n1 + n2)
   {
     printf ("\t %d \n",sum);
     n1 = n2;
     n2 = sum;
   }

 scanf ("%d");
}