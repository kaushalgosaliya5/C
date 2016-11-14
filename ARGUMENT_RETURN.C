#include<stdio.h>
int sum(int,int);
void main()
{
   int x,y,ans;

   x = 5;
   y = 7;

   ans = sum(x,y);

   printf ("\n ans is : %d",ans);
   scanf ("%d");
}

 int sum(int p,int q)
  {
    return p+q;
  }