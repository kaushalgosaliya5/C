#include<stdio.h>
void ksl(int []);
int u=4;
void main()
{
  int i,x[10];
  
  for (i=0;i<=u;i++)
   {
  			printf("\n enter any number %d :: ",i+1);
  			scanf ("%d",&x[i]);
   }

   ksl(x);

  scanf ("%d");
}

void ksl(int p[])
 {
   int j,min,i,k;

   min = p[0];

   for(i=1;i<=(u-1);i++)
    {
   	if(p[i] < min)
    	{
      	min = p[i];
    	}
    }

   for (j=1;j<=min;j++)
    {
       k=0;

       for(i=0;i<=u;i++)
        {

         if(p[i] % j == 0)
          {
            k++;
          }

        }

       if(k == (u+1))
        {
          printf("\t %d",j);
        }
    }

   scanf ("%d");
 }
