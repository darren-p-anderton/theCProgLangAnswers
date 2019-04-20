#include <stdio.h>
#include "Ch1Headers.h"

/*	Modify the temperature conversion program to print the
	table in reverse order, that is, from 300 degrees to 0*/

#define LOWER 0			/*So these preprocessor macro substitutions will occur on all source files*/
#define UPPER 300		/*but only seem to apply to this source file...*/
#define STEP 20			/*If this was in the header file, it would apply to all source files that include the header*/


/* print Fahrenheit-Celsius table */
void Ch1Ex5()
{
	int fahr;

	printf("%3c %6c\n", 'F', 'C');
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
