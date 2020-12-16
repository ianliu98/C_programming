#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		if (fahr == lower)
			printf("%s\t%s\n", "fahr", "celsius");
		celsius = 5. * (fahr-32.) / 9.;
		printf("%3.f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
