#include <stdio.h>
/**
 * main- Entry
 * Return:always 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
	
	printf("size of a char: %ul bytes(s)\n"' sizeof(a));
	printf("size of a int: %ul bytes(s)\n"' sizeof(b));
	printf("size of a long int: %ul bytes(s)\n"' sizeof(c));
	printf("size of a long long int: %ul bytes(s)\n"' sizeof(d));
       	printf("size of a float: %ul bytes(s)\n"' sizeof(f));
	return (0);
}
