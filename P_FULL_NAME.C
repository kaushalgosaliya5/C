#include<stdio.h>
void ksl(char *,char *,char *);
void main()
{
  char n[10],s[10],f[20];

  printf ("\n enter your name ::");
  scanf("%s",n);

  printf ("\n enter your surname :: ");
  scanf ("%s",s);

  ksl(n,s,f);

  printf ("\n your full name is : %s",f);

  scanf ("%d");
}

void ksl(char *n,char *s,char *f)
 {
    while(*n != '\0')
     {
       *f = *n;
       n++;
       f++;
       if(*n == '\0')
        {
          *f = ' ';
          f++;
        }
     }

    while(*s != '\0')
    {
      *f = *s;
      s++;
      f++;
    }

  *f = '\0';
}
