#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char str[50];
     clrscr();

	 printf("Enter a string:");

	 gets(str);
	 printf("%s Contains %d Characters.\n",str,strlen(str));

	 strlwr(str);
	 printf("String in lower case:%s\n",str);

	 strupr(str);
	 printf("String in Upper case:%s\n",str);








     getch();

}