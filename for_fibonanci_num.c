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

   for(sum=n1+n2;sum<=num;sum=n1+n2)
    {
      printf ("\n %d",sum);
      n1 = n2;
      n2 = sum;
    }
    scanf ("%d");
}