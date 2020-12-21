#include <stdio.h>

main()
{
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 250;
	step = 25;

	celsius = lower;
	while(celsius<=upper)
	{
		fahr = 32 + 9 * celsius / 5;
		printf("%.2f\t%.2f\n", celsius, fahr);
		celsius += step;
	}
}
