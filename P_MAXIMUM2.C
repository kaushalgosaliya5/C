#include<stdio.h>
int max(int *);
void main()
{
   int x[5],m,i;

   for(i=0;i<5;i++)
    {
      printf ("\n enter any number ::");
      scanf ("%d",&x[i]);
    }

   m = max(x);

   printf ("\n your maximum num is :: %d",m);

  scanf("%d");
}

int max(int *p)
{
  int i,max;

  max = p[0];

  for(i=1;i<5;i++)
   {
     if(max < p[i])
      {
        max = p[i];
      }
   }

  return max;
}