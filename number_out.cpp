#include "number.h"


void out(number * num, std::ofstream & ofstr)
{
	int type_key = num->key;

	ofstr << "Type " << type_key+1;
	if (type_key == type::COMPLEX) {
		ofstr << ": COMPLEX. ";
		out((number_complex*)num->data, ofstr);
	}
	else if (type_key == type::FRACTAL) {
		ofstr << ": FRACTAL. ";
		out((number_fractal*)num->data, ofstr);
	}
	else if (type_key == type::POLAR) {
		ofstr << ": POLAR. ";
		out((number_polar*)num->data, ofstr);
	}
	else {
		return;
	}
}