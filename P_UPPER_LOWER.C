#include<stdio.h>
void upper(char *);
void main()
{
  char x[10];

  printf ("\n enter your name (lower-case) :: ");
  scanf ("%s",x);

  upper(x);

  printf ("\n your name is (upper-case) :: %s",x);

  scanf ("%d");
}

void upper(char *p)
 {
   while(*p != '\0')
    {
      *p = *p - 32;
      p++;
    }
 }