#include <stdio.h>

#define UPPER	300
#define LOWER	0

float fa2ce(int);

int main()
{
	int step = 20;
	
	printf("Fahr\tCel\n");
	for (int i=LOWER; i<=UPPER; i=i+step)
		printf("%d\t%.2f\n", i, fa2ce(i));
	return 0;
}

float fa2ce(int fahr)
{
	return (5.0 / 9.0) * (fahr - 32.0);
}
