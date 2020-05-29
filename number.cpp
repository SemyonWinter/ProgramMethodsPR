#include "number.h"

void clearNum(number * num)
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
	else {
		return;
	}
}

number * in(std::ifstream & ifstr, int type_key)
{
	number *num_element = new number;
	
	if (type_key == 1) {
		num_element->data = inComplex(ifstr);
	}
	else if (type_key == 2) {
		num_element->data = inFract(ifstr);
	}
	else {
		return nullptr;
	}

	return num_element;
}
