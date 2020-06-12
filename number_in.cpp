#include "number.h"

number * in(std::ifstream & ifstr, int type_key)
{
	number *num_element = new number;
	
	if (type_key == 1) {
		num_element->data = in_complex(ifstr);
	}
	else if (type_key == 2) {
		num_element->data = in_fract(ifstr);
	}
	else if (type_key == 3) {
		num_element->data = in_polar(ifstr);
	} 
	else {
		return nullptr;
	}
	if (num_element == nullptr) return nullptr;
	return num_element;
}
