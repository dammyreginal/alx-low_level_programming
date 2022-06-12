#include <stdio.h>
/**
*prints the lowercase alphabet in reverse, followed by a new line.
*
*Always return 0
*/
int main(void)
{
char c;
for ( c = 'z'; c = 'a'; c--)
{
putchar(c);
}
putchar('\c');
}
