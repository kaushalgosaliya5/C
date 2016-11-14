#include<stdio.h>
void arithop(int,int,int *,int *,int *,int *);
void main()
{
  int x,y,sum,multi,div,sub;

  printf ("\n enter value of n1 :: ");
  scanf ("%d",&x);

  printf ("\n enter value of n2 :: ");
  scanf ("%d",&y);

  arithop(x,y,&sum,&sub,&multi,&div);

  printf ("\n sum of %d and %d is :: %d",x,y,sum);
  printf ("\n sub of %d and %d is :: %d",x,y,sub);
  printf ("\n multi of %d and %d is :: %d",x,y,multi);
  printf ("\n div of %d and %d is :: %d",x,y,div);

  scanf ("%d");
}

void arithop(int p,int q,int *s,int *su,int *m,int *d)
 {
    *s = p + q;
    *su = p - q;
    *m = p * q;
    *d = p / q;
 }