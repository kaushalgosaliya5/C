#include<stdio.h>
void sum(int,int);
void main()
{
  int x,y;

  x = 5;
  y = 7;

  sum(x,y);
}

void sum(int p,int q)
 {
    int sum;

    sum = p + q;

    printf ("\n you sum is : %d",sum);
    scanf ("%d");
 }