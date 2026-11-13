#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 0,a[10],sv;
	clrscr();
	printf("Enter 10 numbers:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("Enter a no. to search in the array:");
	scanf("%d",&sv);
	for(i=0;i<10;i++)
	{
	 if (sv== a[i])
	 {
	    printf("%d is found at %d\n",sv,i);
	 }
	}
	getch();

}
