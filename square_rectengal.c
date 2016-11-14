# include <stdio.h>
void main()
{
  int ch,l,b,area,pera;

  printf ("\n 1.square");
  printf ("\n 2.rectengal");

  printf ("\n enter your choice ( 1 & 2 ) : ");
  scanf ("%d",&ch);

  if (ch==1)
  {
    printf ("\n enter lenth :");
    scanf ("%d",&l);

    pera = 4 * l;
    area = l * l;

    printf ("\n square peramiter is : %d",pera);
    printf ("\n square area is : %d",area);
  }
  else
  {
     printf ("\n enter lenth :");
     scanf ("%d",&l);
     printf ("\n enter breath :");
     scanf ("%d",&b);

     area = l *b
     pera = 2 * ( l + b );

     printf ("\n rectengal peramiter is : %d",pera);
     printf ("\n rectengal area is : %d",area);
  }

  scanf ("%d");
}