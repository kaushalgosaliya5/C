#include<stdio.h>
void upper(char*);
void main()
{
   char name[10];

   printf ("\n enter name (lower - case) :");
   scanf ("%s",name);

   upper(name);

   printf ("\n name is : %s",name);
   scanf ("%d");
}

void upper(char *n)
 {
    int i;

    i=0;

    while (n[i] != '\0')
    {
       n[i] = n[i] - 32;
       i++;
    }

 }


