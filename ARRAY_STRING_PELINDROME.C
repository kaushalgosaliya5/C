#include<stdio.h>
#include<string.h>
void main()
{
  char name[10],rname[10];
  int i;

  printf ("\n enter any string :");
  scanf ("%s",name);

  strcpy(rname,name);
  strrev(rname);

  i = strcmp(name,rname);

  if (i==0)
  {
    printf ("\n string is  palindrome");
  }

  else
  {
   printf ("\n string is not palindrome ");
  }

  scanf ("%d");
}