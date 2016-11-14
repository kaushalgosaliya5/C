#include<stdio.h>
int digits(int,int);
void main()
{
  int n,k,d;

  printf ("\n enter number ::");
  scanf ("%d",&n);

  printf ("\n enter position :");
  scanf ("%d",&k);

  d = digits(n,k);

  printf ("\n digit is : %d",d);
  scanf ("%d");
}

int digits(int n,int k)
{
   int i=1;
   int rem;

   for (i=1;i <= k;i++)
   {
       rem = n % 10;
       n = n / 10;
   }

  return  rem;

}
