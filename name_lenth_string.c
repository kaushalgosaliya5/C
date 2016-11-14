# include <stdio.h>
void main()
{
   char name[25];
   int l=0;

   printf ("\n enter your name :");
   scanf ("%s",name);

   while (name[l] != '\0')
   {
     l++;
   }

  printf ("\n lenth of string : %d",l);

 scanf ("%d");
}