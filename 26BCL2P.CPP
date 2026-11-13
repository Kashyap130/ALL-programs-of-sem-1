#include<stdio.h>
#include<conio.h>
int main()
{

	int  n, i=0;
	clrscr();
	printf("Enter a no.:");
	scanf("%d",&n);
	do
{
	i = i + 1;
	printf("%d ",i);
}
      while( i < n );


getch();
 return 0;
}
