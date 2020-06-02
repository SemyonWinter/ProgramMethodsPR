#include "number.h"


double new_function(number * num)
{
	int type_key = num->key;

	if (type_key == type::COMPLEX) {
		return new_function((number_complex*)num->data);
	}
	else if (type_key == type::FRACTAL) {
		return new_function((number_fractal*)num->data);
	}
	else return 0;
}