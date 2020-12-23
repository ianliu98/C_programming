#include <stdio.h>

int main(int argc, char *argv[])
{
	int year;

	year = atoi(argv[1]);

	if ((year%4==0 && year%100!=0) || year%400==0)
		printf("The year %d is a leap year!\n", year);
	else
		printf("The year %d is NOT a leap year!!\n", year);

	return 0;
}
