#include <stdio.h>
#include "Ch1Headers.h"

/* Print Celcius-Fahrenheit Conversion Table
for celsius = 0, 10, 20 ... 200 */

void Ch1Ex4()
{
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;		/* Lower limit of temperature table */
	upper = 200;	/* Upper limit of temperature talbe */
	step = 10;		/* step size */

	celsius = lower;
	printf("%3c%6c\n",'C','F');
	while (celsius <= upper) {
		fahr = ((9.0 / 5.0) * celsius) + 32.0;
		printf("%3.0f%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	
}