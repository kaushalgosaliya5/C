# include <stdio.h>
void main()
{
  int num,r,c,x=1;

  printf ("\n enter any number :");
  scanf ("%d",&num);

  r=0;

  while ( r <= num )
  {
    c = 1;

    while (c <= r)
        {
            printf ("%d",x);
            c++;

            if (x==1)
              {
                 x=0;
              }
            else
              {
                 x=1;
              }
        }

    printf ("\n");
    r++;
  }
  scanf ("%d");
}