#include <stdio.h>
/**
*prints the lowercase alphabet in reverse, followed by a new line.
*
*Always return 0
*/
int main(void)
{
char n;
for (n = 'z'; n >= 'a'; n--)
{
putchar(n);
}
putchar('\n');
return (0);
}
