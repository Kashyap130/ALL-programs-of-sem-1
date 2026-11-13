
#include <stdio.h>
#include <conio.h>

void main()
{
  int x,y,a,s,m;
  float d;
  clrscr ();
  printf("Enter 2 Values:");
  scanf("%d%d",&x,&y);
  a = x + y;
  s = x - y;
  m = x * y;
  d = x / y;
  printf("Addition = %d\nMultiplication = %d\nSubtraction = %d\nDivision = %.2f\n" ,a,s,m,d);
  getch();
}