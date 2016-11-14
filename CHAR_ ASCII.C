#include<stdio.h>
void ascii(char[]);
void main()
{
  char x[10];

  printf ("\n enter any string ::");
  scanf ("%s",x);

  ascii(x);
}

void ascii(char p[])

 {
    int i=0;

    printf ("\n your charecer is :: %s :: and ascii is :: ",p);

    while(p[i] != '\0')
     {
       printf ("\t%d",p[i]);
       i++;
     }
   scanf ("%d");
 }