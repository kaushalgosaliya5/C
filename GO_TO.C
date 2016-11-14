# include <stdio.h>
void main()
{
  int i;

  printf (" use 'go to' = 15 \n\n");

  for(i=1;i<20;i++)
  {
    if (i==15)
    {
      goto k;
    }
    printf ("\t %d \n",i);
  }
  k :
  scanf ("%d");
}