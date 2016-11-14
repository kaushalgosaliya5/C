# include <stdio.h>
void main()
{
   int num,r,c;

   printf ("\n enter any number :");
   scanf ("%d",&num);

   r = 1;

   while (r <= num)
   {
     c = 1;
     while (c <= num)
     {
      printf ("*");
      c++;
     }
     printf ("\n");
     r++;
   }
  scanf ("%d");
}