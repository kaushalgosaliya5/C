# include <stdio.h>
void main()
{
  int num,i,logic,selectnum;

  printf ("\n select num :");
  scanf ("%d",&selectnum);

  printf ("\n1\n2");

  num = 3;

  while (num<=selectnum)

  {
     logic=1;
     i=2;

     while (i < num)
     {
       if (num % i == 0 )
       {
         logic = 0;
         break;
       }
       i++;
     }

     if (logic == 1)
       {
           printf ("\n %d",num);
       }

    num++;
  }
  scanf ("%d");
}  