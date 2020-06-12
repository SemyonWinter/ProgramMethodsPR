#include "number.h"

void clear_num(number * num)
{
	if (num->key == type::COMPLEX) {
		delete (number_complex*)num->data;
	}
	else if (num->key == type::FRACTAL) {
		delete (number_fractal*)num->data;
	}
	else {
		return;
	}
}