# include <stdio.h>
void main()
{
  int num;

  printf ("\n enter your month number (1 to 12) :");
  scanf ("%d",&num);

  switch (num)

   {
      case 1:
              {
                printf ("\n %d - JANUARY",num);break;
              }

       case 2:
              {
                printf ("\n %d - FEBRUARY",num);break;
              }

       case 3:
              {
                printf ("\n %d - MARCH",num);break;
              }

      case 4:
              {
                printf ("\n %d - APRIL",num);break;
              }

     case 5:
              {
                printf ("\n %d - MAY",num);break;
              }

     case 6:
              {
                printf ("\n %d - JUNE",num);break;
              }

     case 7:
              {
                printf ("\n %d - JULY",num);break;
              }
     case 8:
              {
                printf ("\n %d - AUGUST",num);break;
              }
     case 9:
              {
                printf ("\n %d - SEPTEMBER",num);break;
              }
     case 10:
              {
                printf ("\n %d - OCTUMBER",num);break;
              }
     case 11:
              {
                printf ("\n %d - NOVEMBER",num);break;
              }
     case 12:
              {
                printf ("\n %d - DECEMBER",num);break;
              }
      default :
              {
                printf ("\n this number %d is not valioud",num);break;
              }
   }
 scanf ("%d");  
}