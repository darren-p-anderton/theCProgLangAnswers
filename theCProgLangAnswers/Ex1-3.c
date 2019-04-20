#include <stdio.h>
#include "Ch1Headers.h"

/*print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */

void Ch1Ex3()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	fahr = lower;
	printf("F   C\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

/*Darren P. Anderton*/

