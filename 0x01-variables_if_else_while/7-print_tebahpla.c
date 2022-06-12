#include <stdio.h>
/**
*main - Prints the alphabet at reverse.
*
*return : Always (success)
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
