#include<stdio.h>
#include<e:\CCC\FILE\3_HEADER.h>
void main()
{
   int x,ans;

   printf ("\n enter any number :: ");
   scanf ("%d",&x);

   ans = squr(x);
   printf ("\n your num is %d and square is :: %d",x,ans);

   ans = area(x);
   printf ("\n your num is %d and  area is :: %d",x,ans);

   ans = rev(x);
   printf ("\n your num is %d and reverse is :: %d",x,ans);

  scanf ("%d");
}
