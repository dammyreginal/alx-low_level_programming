#include <stdio.h>
/**
*main - prints a hexadecimal string.
*
*Return Always (0)
*/
int main(void)
{ char c;
 
for (c = '0'; c <= '9'; c++)
 
{
putchar(c);
}
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
