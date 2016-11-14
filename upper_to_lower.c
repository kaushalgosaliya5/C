#include<stdio.h>
void lower(char*);
void main()
{
   char name[10];

   printf ("\n enter name (upper - case) :");
   scanf ("%s",name);

   lower(name);

   printf ("\n name is : %s",name);
   scanf ("%d");
}

void lower(char *n)
 {
    int i;

    i=0;

    while (n[i] != '\0')
    {
       n[i] = n[i] + 32;
       i++;
    }

 }
