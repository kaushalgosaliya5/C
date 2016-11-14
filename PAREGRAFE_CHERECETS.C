# include <stdio.h>
void main()
{
  int i=0,words=0,chars=0,ln=0;
  char ch[100];

  printf ("this program by end to enter new line in enter + 'ctrl+z' + enter :");


  printf ("\n\n enter your paragraph : \n\t\t\t");

  while ((ch[i]=getchar())!=EOF)

  {
    if (ch[i] == ' ')
    {
      words++;
    }

   else if (ch[i] == '\n')
   {
     ln++;
   }

   else if (ch[i] == '\b')
   {
     words--;
   }
   else
   {
    chars++;
   }
   i++;
 }

  printf ("\n there are : \n\t  chars : %d",chars);

  getchar();
}