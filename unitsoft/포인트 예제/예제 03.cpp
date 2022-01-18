#include <cstdio>

int main ()
{
	 const char *cp = "Abcd";
	 printf("%c %c\n", *cp, *cp+1);
	 printf("%c%c%c%c%c\n", cp[0],*(cp+1),cp[2],*(cp+3),cp[4]);
 } 
