#include <stdio.h>
#include <conio.h>

void main()
{
     int a,b,c,h,l;
     clrscr();
     printf("Enter 3 No.");
     scanf("%d %d %d",&a,&b,&c);
     if ( a > b )
     {
	  h = a;		l = b;
     }
     else
     {
	  h = a;		l = b;
     }
      if (c > h)
	  h = c;
      if (c < l)
	  l = c;
      if (h == l)
	  printf("ALL values are same.\n");
      else
	  printf("Highest value")

	getch();
}