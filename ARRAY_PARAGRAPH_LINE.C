# include <stdio.h>
void main()
{
  int ln=0;
  char ch;

  printf ("this program by end to enter new line in enter + 'ctrl+z' + enter :");

  printf ("\n\n entr your paragraph : \n\t\t\t");

  while ((ch=getchar()) != EOF)

  {

    if (ch == '\n')
      {
         ln++;
      }

  }

  printf ("\n lines : %d ",ln);

  getchar();
}