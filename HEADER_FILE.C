#include<stdio.h>
#include "e:\ccc\file\HEADER.h"
void main()
{
   int n,ans;

   printf ("\n enter any number :");
   scanf ("%d",&n);

   ans = fact(n);

   printf ("\n this num  factorial is : %d",ans);

   ans = sqr(n);

   printf ("\n square is : %d",ans);

   ans = qub(n);

   printf ("\n quib is : %d",ans);

   scanf ("%d");
}