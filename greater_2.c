# include <stdio.h>
void main()
{
  int n1,n2,n3;

  printf ("\n enter value of n1 :");
  scanf ("%d",&n1);

  printf ("\n enter value of n2 :");
  scanf ("%d",&n2);

  printf ("\n enter value of n3 :");
  scanf ("%d",&n3);

  if ((n1>n2)&&(n1>n3))
  {
    printf ("\n greater number is : %d",n1);
  }

  if ((n2>n1)&&(n2>n3))
  {
    printf ("\n greater number is : %d",n2);
  }

  if ((n3>n1)&&(n3>n2))
  {
    printf ("\n greater number is : %d",n3);
  }
  if (n1=n2=n3)
  {
    printf ("\n greater number is : %d",n1);
  }

  scanf ("%d"); 
}