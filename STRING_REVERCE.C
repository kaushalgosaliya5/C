# include <stdio.h>
# include <string.h>
void main()
{
  char name[10];

  printf ("\n enter your name :");
  scanf ("%s",name);

  strrev(name);

  printf ("\n reverse string : %s",name);

  scanf ("%d");
}