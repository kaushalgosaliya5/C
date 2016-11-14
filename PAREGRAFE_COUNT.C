# include <stdio.h>
void main()
{
  int ln=1,words=0,chars=0;
  char ch;

  printf ("this program by end to enter new line in enter + 'ctrl+z' + enter :");


  printf ("\n\n entr your paragraph : \n\t\t\t");

  while ((ch=getchar()) != EOF)

  {

    if (ch == ' ')
    {
      words++;
    }

   else if (ch == '\n')
   {
     ln++;
   }

   else if (ch == '\b')
   {
     words--;
   }
   else
   {
    chars++;
   }

  }

  printf ("\n there are : lines : %d ,words : %d,chars : %d",ln-1,words+ln-1,chars);

  getchar();
}