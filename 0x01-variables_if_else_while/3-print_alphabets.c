#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print alphabets lowercase and uppercase'
  *Return: always 0
  */
int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'z') {
			putchar(c);
			d++;
		}
	putchar('\n');
	return (0);
}
