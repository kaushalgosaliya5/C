#include<stdio.h>
void main()
{
  char name[10],tmp;
  int i,j;

  i = 0;
  j = 0;

  printf ("\n enter any string :");
  scanf ("%s",name);

  while ( name[j] != '\0' )
  {
    j++;
  }

  j--;

  while ( j > i )
  {
    tmp = name[i];
    name[i] = name[j];
    name[j] = tmp;

    j--;
    i++;
  }

  printf  ("\n reverse is : %s",name);

  scanf ("%d");
}