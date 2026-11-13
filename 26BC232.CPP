#include <stdio.h>
#include <conio.h>
void main()
{
	int s = 0,v,a,i,n;
	clrscr();
	printf("Enter a Value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
       {
	scanf("%d",&v);
	 s += v;
       }
	 a =(float) s / n;

	printf("\nSUM =%u\nAverage = %.2f\n",s,a);


	getch();
}