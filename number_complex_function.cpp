#include "number_complex.h"


double new_function(number_complex *num) {
	return sqrt(num->real_double*num->real_double + num->imag_double*num->imag_double);
}