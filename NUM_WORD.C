# include <stdio.h>
void main()
{
  int num,i,x[10];

  printf ("\n enter any number :");
  scanf ("%d",&num);

  i = 0;

  while (num > 0)
  {
    x[i] = num % 10;
    i++;
    num = num / 10;
  }

 printf ("\n\n your answer is  :  ");

  while ( i > 0 )

   {
      i--;
      switch(x[i])
        {
           case 1:
            {
              printf (" one ");break;
            }

           case 2:
            {
              printf (" two ");break;
            }
           case 3:
            {
              printf (" three ");break;
            }
           case 4:
            {
              printf (" four ");break;
            }
           case 5:
            {
              printf (" five ");break;
            }
           case 6:
            {
              printf (" six ");break;
            }
           case 7:
            {
              printf (" seven ");break;
            }
           case 8:
            {
              printf (" eight ");break;
            }
           case 9:
            {
              printf (" nine ");break;
            }
           case 0:
            {
              printf (" zero ");break;
            }

      }
  }
  scanf ("%d");
}