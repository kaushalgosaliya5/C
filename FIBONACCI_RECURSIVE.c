#include<stdio.h>
void fibo(int,int,int);
void main()
{
   int num;

   printf ("\n enter number :");
   scanf ("%d",&num);

   printf ("\n %d \n %d",0,1);

   fibo(0,1,num);
}

void fibo(int n1,int n2,int num)
 {
    int sum;

    sum = n1 + n2;

    if (sum <= num)
     {
        printf ("\n %d",sum);
        n1 = n2;
        n2 = sum;
        fibo(n1,n2,num);
     }
  scanf ("%d");
 }