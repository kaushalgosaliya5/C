#include<stdio.h>
#include<alloc.h>

struct node
{
   int data;
   struct node *next;
}*first=NULL;

void insert(int val)
{
  struct node *new1,*curt;

  new1 = (struct node *)malloc(sizeof(struct node));

  new1 -> data = val;
  new1 -> next = NULL;

  if(first == NULL)
  {
    first = new1;
    return;
  }

  curt = first;

  while(curt -> next != NULL)
  {
    curt = curt -> next;
  }

  curt -> next = new1;
}

 void display()
 {
   struct node *curt;

   if(first == NULL)
   {
     printf("\n your link list is EMPTY ");
     return;
   }

   curt = first;

   while(curt != NULL)
   {
     printf("%d-->",curt -> data);

     curt = curt -> next;
   }
 }

 void delnode(int val)
 {
   struct node *curt,*prev;

   if(first == NULL)
   {
     printf("\n link list is empty ");
     return;
   }

   curt = first;

   if(first -> data == val)
   {
     first = first -> next;
     free(curt);
     return;
   }

   while(curt -> data != val && curt != NULL)
   {
      prev = curt;
      curt = curt -> next;


   if(curt == NULL)
   {
     printf("\n value not found");
     return;
   }
   }
   prev -> next = curt -> next;

   free(curt);

 }

void insbig(int val)
{
  struct node *new1;

  new1 = (struct node *)malloc(sizeof(struct node));

  new1 -> data = val;
  new1 -> next = first;

  first = new1;
}


void main()
{
  int ch,val;

  do
  {
  printf("\n |---------menu--------|");
  printf("\n    1.INSERT ");
  printf("\n    2.DISPLAY  ");
  printf("\n    3.DELETE  ");
  printf("\n    4.INSERT BEGINNING  ");
  printf("\n    5.DELETE   ");
  printf("\n |---------------------|");

  printf("\n enter your choice  :: ");
  scanf("%d",&ch);

  if( ch == 1 )
  {
    printf("\n enter number :: ");
    scanf("%d",&val);

    insert(val);
  }
 else if( ch == 2 )
 {
   printf("\n ");

   display();
 }
  else if(ch == 3)
  {
    printf("\n enter delete value :: ");
    scanf("%d",&val);

    delnode(val);
  }
  else if(ch == 4)
  {
    printf("\n enter BEGINING insert number :: ");
    scanf("%d",&val);

    insbig(val);
  }
  else if(ch == 5)
  {
    printf("\n BYE BYE ");
    return;
  }
  else
  {
    printf("\n your choice in invalide ");
  
  }
 } while(ch != 5);

 scanf("%d");
}