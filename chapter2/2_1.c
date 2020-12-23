#include <stdio.h>

int main(int argc, char *argv[])
{
 	unsigned char a1=-1;
	signed char a2=-1;

	unsigned int b1=-1U;
	signed int b2=-1;

	unsigned short int c1=-1;
	signed short int c2=-1;

	unsigned long int d1=-1UL;
	signed long int d2=-1;

	int e = sizeof(float);
	int f = sizeof(double);
	int g = sizeof(long double);

	printf("unsigned char: %u \n", a1);
	printf("signed char: %d \n\n", a2);

	printf("unsigned int: %u \n", b1);
	printf("signed char: %d \n\n", b2);

	printf("unsigned short: %u \n", c1);
	printf("signed char: %d \n\n", c2);

	printf("unsigned long: %lu \n", d1);
	printf("signed char: %ld \n\n", d2);

	printf("float: %d bytes\n", e);
	printf("double: %d bytes\n", f);
	printf("long double: %d bytes\n", g);

	return 0;
}
