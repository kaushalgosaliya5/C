#include <stdio.h>
void main()
{
  int num;

  printf ("\n this program is  days");
  
  printf ("\n\n enter any number (1 to 7) :");
  scanf ("%d",&num);

  switch(num)
  {
    case 1:
            {
              printf ("\n %d - sunday",num);break;
            }
    case 2:
            {
              printf ("\n %d - monday",num);break;
            }
    case 3:
            {
              printf ("\n %d - tuesday",num);break;
            }
    case 4:
            {
              printf ("\n %d - wednesday",num);break;
            }
    case 5:
            {
              printf ("\n %d - thursday",num);break;
            }
    case 6:
            {
              printf ("\n %d - friesday",num);break;
            }
    case 7:
            {
              printf ("\n %d - saturday",num);break;
            }

    default :
            {
              printf ("\n %d - not valide number",num);break;
            }
   }
     scanf  ("%d");
}


