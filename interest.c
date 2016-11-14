#include<stdio.h>
float calinterest(float,float,float);
void main()
{
   float i,p,r,n;

   printf ("\n enter principal amount ::");
   scanf ("%f",&p);

   printf ("\n enter rate of interest ::");
   scanf ("%f",&r);

   printf ("\n enter number of year ::");
   scanf ("%f",&n);

   i = calinterest(p,r,n);

   printf ("\n your ans is : %.2f",i);
   scanf ("%d");
}

 float calinterest(float p,float q,float r)
 {
    float ans;

    ans = ( p * q * r ) / 100;

    return ans;
 }
