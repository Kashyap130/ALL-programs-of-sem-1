#include<stdio.h>
#include<conio.h>

void main()
{
  int i;
  clrscr();
  printf ("Enter a number:\n",&i);
  scanf("%d",&i);

  if ( i > 0 )

  printf("Number is POSITIVE");

  else if ( i < 0 )

  printf("Number is NEGATIVE");

  else
  printf("Number is ZERO");

   getch();

  }