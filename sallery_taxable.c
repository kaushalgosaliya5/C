# include <stdio.h>
void main()
{
   int num;
   long int sal;                   // sal =salary

   printf ("\n---------------TAX----------------- ");
   printf ("\n [1]  male");
   printf ("\n [2]  female ");
   printf ("\n enter number ( 1 & 2 ) :");
   scanf ("%d",&num);

   printf ("\n enter your salary :");
   scanf ("%ld",&sal);

   switch (num)
  {
     case 1:
             {
                 if (sal > 150000)
                  {
                    printf ("\n this salary is taxeble : %ld",sal); break;
                  }
                else
                  {
                   printf ("\n this salary is not taxeble : %ld",sal);break;
                  }
             }

     case 2:
             {
                 if ( sal > 180000)
                 {
                   printf ("\n this salary is taxeble : %ld",sal);break;
                 }
                 else
                 {
                   printf ("\n this salary is not taxebale : %ld",sal);break;
                 }
            }

     default :
           {
             printf ("\n this number is %d not valied",num);break;
           }
   }
  scanf ("%d");
}

