# include <stdio.h>
void main()
{
  char name[10],rname[10];
  int i,j;

  printf ("\n enter your name :");
  scanf ("%s",name);

  i = 0;
  j = 0;

  while (name[i] != '\0')
  {
    i++;
  }

  i--;

  while ( i >= 0 )
  {
    rname[j] = name[i];

    i--;
    j++;
  }

  rname[j] = '\0';

  printf ("\n reverse string : %s",rname);

  scanf ("%d");
}