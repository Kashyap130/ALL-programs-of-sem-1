#include<stdio.h>
#include<conio.h>

void main()
{
  int i,a,b;
  clrscr();
  printf ("Enter a number:\n",&i);
  scanf("%d",&i);
  a=i%130;
  b=i%63;
  if ( a == 0 && b == 0)

  printf("YES,number is Divisible by 130 & 63\n");

  else

  printf("NO,number is not Divisible by 130 & 63\n");

   getch();

  }