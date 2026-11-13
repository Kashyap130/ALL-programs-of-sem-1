#include <stdio.h>
#include <conio.h>

void main()
{
	 int n,t,q,r,c=0,s=0,rev=0,arm = 0;
	 clrscr();
	 printf("Enter a no.");
	 scanf("%d",&n);
	 t = n;
	 while(n)
	 {
	   q = int(n/10);
	   r = n % 10;
	   printf("%d ",r);
	   c++; s+= r;rev = rev * 10 + r;arm = arm + r * r * r;
	   n = q;
	 }
	 printf("\nThe original no.: %d\n",t);
	 printf("No. of digits in %d = %d\n",t,c);
	 printf("Sum of digits of %d = %d\n",t,s);
	 printf("Reversed no. of %d = %d\n",t,rev);
	 printf("Is ARMstrong: %s\n", ((t==arm)?"Yes":"No"));
	 getch();
}