#include<stdio.h>
int sum(int,int);
void main()
{
   int x,y,result;

   x = 5;
   y = 7;

   result = sum(x,y);

   printf ("\n sum %d and %d is : %d",x,y,result);
   scanf ("%d");
}

 int sum(int p,int q)
 {
    int r;

    r = p + q;
    
    return r;
 }
