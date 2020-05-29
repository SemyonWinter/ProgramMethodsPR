#include "number.h"

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
