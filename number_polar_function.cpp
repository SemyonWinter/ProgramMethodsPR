#include "number_polar.h"

double new_function(number_polar * num) {
	return num->dist*sin(num->angle);
}
