#include "number_fractal.h"

double new_function(number_fractal *num) {
	return (double)(num->numerator_int) / (num->denominator_int);
}