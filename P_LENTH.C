#include<stdio.h>
int lenth(char *);
void main()
{
  char x[10];
  int l;

  printf ("\n enter your name :: ");
  scanf("%s",x);

  l = lenth(x);

  printf ("\n lenth is : %d",l);
  scanf ("%d");
}

int lenth(char *p)
 {
   int l=0;

   while(*p != '\0')
    {
    	p++;
    	l++;
    }

   return l;
 }