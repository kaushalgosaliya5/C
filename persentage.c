#include<stdio.h>
void main()
{
  float outof,total,per;

  printf ("\n this program is persentege ");

  printf ("\n enter your marks total :");
  scanf ("%f",&total);

  printf ("\n enter your marks to outof :");
  scanf ("%f",&outof);

  per =  (total*100) / outof;

  printf ("\n your persentage is : %.2f",per);
  scanf ("%f");

}