#include<stdio.h>
void fibo(int);
void main()
{
    int num;

    printf ("\n enter any number :");
    scanf ("%d",&num);

    fibo(num);
}
void fibo(int n)
{
   int n1=0,n2=1,sum;

   printf ("\n %d \n %d",n1,n2);

   sum = n1 + n2;

   while (sum <= n)
    {
        printf ("\n %d",sum);
        n1 = n2;
        n2 = sum;
        sum = n1 + n2;
    }
    scanf ("%d");
}