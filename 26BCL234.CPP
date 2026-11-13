#include <stdio.h>
#include <conio.h>

void main()
{
	 int n,t,q,r,c=0,s=0;
	 clrscr();
	 printf("Enter a no.");
	 scanf("%d",&n);
	 t = n;
	 while(n)
	 {
	   q = int(n/10);
	   r = n % 10;
	   printf("%d ",r);
	   c++; s+= r;
	   n = q;
	 }
	 printf("\nThe original no.: %d\n",t);
	 printf("No. of digits in %d = %d\n",t,c);
	 printf("Sum of digits of %d = %d\n",t,s);
	 getch();
}