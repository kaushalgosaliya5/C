#include<stdio.h>
void prime1(void);
void prime2(void);
void main()
{
  int num,logic,x;

  printf ("\n enter any number ::");
  scanf ("%d",&num);

  x=2;
  logic=1;

  while (x < num )
  {
    if (num % x == 0)
     {
       logic = 0;
       break;
     }
    x++;
  }

 if(logic == 1)
 {
   prime1();
 }

 else
 {
  prime2();
 }

}

void prime1()
{
   printf ("\n this number is prime :: 1");
   scanf ("%d");
}

void prime2()
{
  printf ("\n this number is not prime :: 0");
  scanf ("%d");
}