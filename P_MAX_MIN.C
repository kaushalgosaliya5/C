#include<stdio.h>
void maxmin(int*,int*,int*);
void main()
{
  int i,x[5],max,min;

  for(i=0;i<5;i++)
   {
     printf ("\n enter your any number :: ");
     scanf ("%d",&x[i]);
   }

  maxmin(x,&max,&min);

  printf("\n your max num is :: %d",max);
  printf ("\n your min num is :: %d",min);

  scanf ("%d");
}

void maxmin(int *p,int *max,int *min)
 {
   int i;

   *max = p[0];
   *min = p[0];

   for(i=1;i<5;i++)
    {
       if(*max < p[i])
        {
           *max = p[i];
        }

       if(*min > p[i])
        {
          *min = p[i];
        }
    }
 }