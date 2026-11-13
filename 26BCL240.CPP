#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char str[100];
     clrscr();


     printf("Enter a string:");
     gets(str);
     printf("%s Contains %d character.\n",str,strlen(str));


	getch();

}
