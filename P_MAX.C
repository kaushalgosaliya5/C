#include<stdio.h>

void max(int *);
void main()
{
  int num[5],i;

  for(i=0;i<5;i++)
  {
    printf("\n enter your num :: ");
    scanf("%d",&num[i]);
  }

  max(num);
}

void max(int *p)
{
  int i,m;

  m = *p;
  p++;

  for(i=1;i<5;i++)
  {
    if(*p > m)
    {
      m = *p;
    }
    p++;
  }

  printf("\n max is :: %d",m);
  scanf("%d");
}
