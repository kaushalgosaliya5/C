#include<stdio.h>
float pi(void);
void main()
{
  float r,ans;

  printf ("\n enter radious :");
  scanf ("%f",&r);

  ans = pi() * r * r;

  printf ("\n you ans is : %f",ans);
  scanf ("%d");
}

float pi(void)
  {
    float x;

    x = 3.14;

    return x;
  }