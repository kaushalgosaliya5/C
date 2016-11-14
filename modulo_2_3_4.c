# include <stdio.h>
void main()
{
  int num;

  printf ("\n enter your any number :");
  scanf ("%d",&num);

  printf ("\n this number %d divided by 2 modulo is : %d",num,num%2);
  printf ("\n this number %d divided by 3 modulo is : %d",num,num%3);
  printf ("\n this number %d divided by 4 modulo is : %d",num,num%4);

  scanf ("%d");
}