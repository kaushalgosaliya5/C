#include<stdio.h>
#define max(x,y) if(x > y) c=x; else c=y;
void main()
{
  int p,q,c;

  p = 10;
  q = 20;

  max(p,q);

  printf("\n your maximum num  is :: %d",c);

  scanf("%d");
}