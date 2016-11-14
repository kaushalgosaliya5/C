# include <stdio.h>
void main()
{
   int num,sum=0,i=1;

   printf ("\n enter any number :");
   scanf ("%d",&num);

   while (i <= num )
   {
     if (i % 2 == 0)
     {
      sum = sum + i;
     }
     i++;
   }

  printf ("\n your even number sum is : %d",sum);
  scanf ("%d");
}