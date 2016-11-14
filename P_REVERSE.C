#include<stdio.h>
void reverse(char *,char *);
void main()
{
  char name[10],rname[10];

  printf ("\n enter your name ::");
  scanf ("%s",name);

  reverse(name,rname);

  printf ("\n reverse is :: %s",rname);

  scanf ("%d");
}

void reverse(char *s,char *d)
 {
   int l=0;

   while(*s != '\0')
    {
       s++;
       l++;
    }

    s--;

    while(l > 0)
     {
        *d = *s;
        s--;
        d++;
        l--;
     }

   *d = '\0';
 }