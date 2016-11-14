# include <stdio.h>
void main()
{
  int l;
  char name[10];

  printf ("\n this program is strint lenth :");
  
  printf ("\n enter any name :");
  scanf ("%s",name);


  l = 0;

  while (name[l] != '\0')
  {
    l++;
  }

  printf ("\n lenth of string is : %d",l);

  scanf ("%d");
}