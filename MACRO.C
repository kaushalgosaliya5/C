#include<stdio.h>
#define PI 3.14
void main()
{
  #if !define (PI)
  {
     #error  PI NOT DEFINE,,,MY NAME IS KAUSHAL ,,,,   // MAKE OWN ERROR 
  }
 #else
  {
     printf("\n\t YOUR MACRO ANS IS :: %f",PI); // MACRO SUPPORT CARE 6 KE NAHI TE MATEE ........
  }
 #endif

 scanf("%d");
}