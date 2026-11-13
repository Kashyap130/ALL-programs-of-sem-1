#include<stdio.h>
#include<conio.h>
int main()
{
	int count = 0;
	int i = 0;
	char str[50];
	clrscr();
	while (str[i] != '0')
      {
	     switch(str[i])
       {
		 case 'A':
		 case 'E':
		 case 'I':
		 case 'O':
		 case 'U':
		 case 'a':
		 case 'e':
		 case 'i':
		 case 'o':
		 case 'u':         count++;
     }

      i++;
      }

       printf("No. of Vowels in %s is %d.\n",str,count);



     getch();
 return 0;
}
