#include <stdio.h>
void main()
{
  int num;

  printf ("\n enter any number (1 to 9) :");
  scanf ("%d",&num);

  switch(num)
  {
    case 1:
            {
              printf ("\n %d - one",num);break;
            }
    case 2:
            {
              printf ("\n %d - two",num);break;
            }
    case :3
            {
              printf ("\n %d - three",num);break;
            }
    case 4:
            {
              printf ("\n %d - four",num);break;
            }
    case 5:
            {
              printf ("\n %d - five",num);break;
            }
    case 6:
            {
              printf ("\n %d - six",num);break;
            }
    case 7:
            {
              printf ("\n %d - seven",num);break;
            }
    case 8:
            {
              printf ("\n %d - eight",num);break;
            }
    case 9:
            {
              printf ("\n %d - nine",num);break;
            }
    case 0:
            {
              printf ("\n %d - zero",num);break;
            }

    default :
            {
              printf ("\n %d - not valide",num);break;
            }
   }
}
scanf  ("%d");
}


