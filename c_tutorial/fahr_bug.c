#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300  ---  kr9 */

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5/9 * (fahr - 32); // 5/9 is evaluated to zero, so celsius will be zero as well.
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
