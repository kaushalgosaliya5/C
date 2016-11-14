# include <stdio.h>
void main()
{
  int i;
  printf ("\n use for break : 5 \n");
  for (i=1;i<10;i++)
  {
    if (i == 5)
    {
     break;
    }
    printf ("\n %d",i);
  }
  scanf ("%d");
}